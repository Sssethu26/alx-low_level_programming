#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * append_text_to_file - functon that appends text at the end of a file
 * @filename: A pointer to the name of the file
 * @text_content: string to add to the end of the file
 * Return: 1 if the file exists and -1 if the file does not exists.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, count);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
