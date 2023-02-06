#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define ELF_MAGIC 0x464C457F
/**
 * main - prints ELF header
 * @agrc:count
 * argv: argument
 * Return: elf
 */
int main(int argc, char *argv[])
{
	int fd;
	int i;
	Elf32_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_file\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("Error reading file");
		return (98);
	}

	if (header.e_ident[0] != ELFMAG0 || header.e_ident[1] != ELFMAG1 || header.e_ident[2] != ELFMAG2 || header.e_ident[3] != ELFMAG3)
	{
		fprintf(stderr, "%s is not an ELF file\n", argv[1]);
		return (98);
	}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");
	printf("  Class:                             %u\n", header.e_ident[EI_CLASS]);
	printf("  Data:                              %u\n", header.e_ident[EI_DATA]);
	printf("  Version:                           %u\n", header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %u\n", header.e_ident[EI_OSABI]);
	printf("  ABI Version:                       %u\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %u\n", header.e_type);
	printf("  Entry point address:               %u\n", header.e_entry);

	return (0);
}

