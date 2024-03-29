#ifndef _MAIN_H
#define _MAIN_H


#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>
#define ELF_MAGIC 0x464C457F


int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int cp(char *file_from, char *file_to);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
