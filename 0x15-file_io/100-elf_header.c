#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
/**
 * print_error_and_exit - print
 * @message: the message
 * Return: nothing
 */
void print_error_and_exit(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}
/**
 * main - main
 * @argc: arguement count
 * @argv: arguement value
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int fd;
	const char *filename;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		print_error_and_exit("Usage: elf_header elf_filename");
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		print_error_and_exit("Cannot open the specified file");
	}

	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		print_error_and_exit("Cannot read ELF header from the file");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error_and_exit("Not an ELF file");
	}

	printf("Magic:   %02x %02x %02x %02x\n", header.e_ident[EI_MAG0], header.e_ident[EI_MAG1], header.e_ident[EI_MAG2], header.e_ident[EI_MAG3]);
	printf("Class:   %d-bit\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
	printf("Data:    %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" :
			"2's complement, big-endian");
	printf("Version: %d (current)\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI:  %d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type:    %s\n", header.e_type == ET_EXEC ? "EXEC (Executable file)" :
			(header.e_type == ET_DYN ? "DYN (Shared object file)" :
			 (header.e_type == ET_REL ? "REL (Relocatable file)" : "UNKNOWN")));
	printf("Entry point address: 0x%lx\n", (unsigned long int)header.e_entry);

	close(fd);
	return (0);
}
