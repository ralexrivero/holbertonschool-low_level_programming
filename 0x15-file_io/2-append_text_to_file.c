#include "main.h"
/**
  * append_text_to_file - appends text at the end of a file.
  * @filename: is the name of the file and text_content
  * @text_content: the NULL terminated string to add at the end of the file
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int varInt_append, varInt_length, varInt_status;

	if (filename == NULL)
		return (-1);
	varInt_append = open(filename, O_WRONLY | O_APPEND);
	if (varInt_append == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (varInt_length = 0; text_content[varInt_length]; varInt_length++)
		;
	varInt_status = write(varInt_append, text_content, varInt_length);
	close(varInt_append);
	return (varInt_status == -1 ? -1 : 1);
}
