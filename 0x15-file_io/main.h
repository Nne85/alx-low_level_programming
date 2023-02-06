#ifndef _MAIN_H
#define _MAIN_H


#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>
#define ELF_MAGIC 0x464C457F

typedef struct {
unsigned char e_ident[16];
unsigned short e_type;
unsigned short e_machine;
unsigned int e_version;
unsigned int e_entry;
unsigned int e_phoff;
unsigned int e_shoff;
unsigned int e_flags;
unsigned short e_ehsize;
unsigned short e_phentsize;
unsigned short e_phnum;
unsigned short e_shentsize;
unsigned short e_shnum;
unsigned short e_shstrndx;
} ElfHeader;

int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int cp(char *file_from, char *file_to);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
