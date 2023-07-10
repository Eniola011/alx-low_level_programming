#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void find_elf(unsigned char *e_ident);
void elf_magic(unsigned char *e_ident);
void elf_class(unsigned char *e_ident);
void elf_data(unsigned char *e_ident);
void elf_version(unsigned char *e_ident);
void elf_osabi(unsigned char *e_ident);
void elf_abi(unsigned char *e_ident);
void elf_type(unsigned int e_type, unsigned char *e_ident);
void elf_entry(unsigned long int e_entry, unsigned char *e_ident);
void elf_close(int elf);

/**
 * find_elf - cross checks for elf file
 * @e_ident: an array containing elf magic
 *
 * Return: no value.
 */
void find_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
		    e_ident[i] != 'E' &&
		    e_ident[i] != 'L' &&
		    e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * elf_magic - outputs magic numbers of an elf header.
 * @e_ident: an array containing elf magic
 *
 * Return: no value
 */
void elf_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * elf_class - outputs class of an elf header.
 * @e_ident: an array containing elf class
 * Return: no value
 */
void elf_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * elf_data - outputs data of an elf header.
 * @e_ident: an array containing elf class
 * Return: no value
 */
void elf_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * elf_version - outputs the version of an elf header.
 * @e_ident: an array containing elf version
 * Return: no value
 */
void elf_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * elf_osabi - outputs the OS/ABI of an elf header.
 * @e_ident: an array containing elf version
 * Return: no value
 */
void elf_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * elf_abi - outputs the ABI version of an ELF header.
 * @e_ident: an array containing elf ABI version
 * Return: no value
 */
void elf_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * elf_type - outputs the type of an elf header.
 * @e_type: elf
 * @e_ident: an array containing elf class
 * Return: no value
 */
void elf_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * elf_entry - outputs the beginning of an elf header.
 * @e_entry: The address of elf beginning
 * @e_ident: an array containing the ELF class.
 * Return: no value
 */
void elf_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - Closes an elf file.
 * @elf: file descriptor
 *
 * Return: no value
 */
void elf_close(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - a program that displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *_header;
	int _open, _read;

	_open = open(argv[1], O_RDONLY);
	if (_open == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	_header = malloc(sizeof(Elf64_Ehdr));
	if (_header == NULL)
	{
		elf_close(_open);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	_read = read(_open, _header, sizeof(Elf64_Ehdr));
	if (_read == -1)
	{
		free(_header);
		elf_close(_open);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	find_elf(_header->e_ident);
	printf("ELF Header:\n");
	elf_magic(_header->e_ident);
	elf_class(_header->e_ident);
	elf_data(_header->e_ident);
	elf_version(_header->e_ident);
	elf_osabi(_header->e_ident);
	elf_abi(_header->e_ident);
	elf_type(_header->e_type, _header->e_ident);
	elf_entry(_header->e_entry, _header->e_ident);

	free(_header);
	elf_close(_open);
	return (0);
}
