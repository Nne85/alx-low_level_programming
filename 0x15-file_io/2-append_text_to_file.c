#include "main.h"
#include <errno.h>

/**
 * append_text_to_file - appends text at the end of file
 * @filename:name of file
 * @text_content: content of text
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = fopen(filename, "a");
	if (fp == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fclose(fp);
		return (1);
	}

	if (fputs(text_content, fp) == EOF)
	{
		fclose(fp);
		return (-1);
	}

	fclose(fp);
	return (1);
}

