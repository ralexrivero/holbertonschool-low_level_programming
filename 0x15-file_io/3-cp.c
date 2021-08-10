#include "main.h"
/**
  * main - copies content
  * @varInt_arc: arguments of
  * @varChr_tokens: array of tokens
  * Return: 0 on success
  */
int main(int varInt_arc, char *varChr_tokens[])
{
	int varInt_source, varInt_target, rd_stat, varInt_status_write;
	mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buffer[BUFFERSIZE];

	if (varInt_arc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	varInt_source = open(varChr_tokens[1], O_RDONLY);
	if (varInt_source == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				varChr_tokens[1]), exit(98);
	varInt_target = open(varChr_tokens[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (varInt_target == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				varChr_tokens[2]), exit(99);
	rd_stat = 1;
	while (rd_stat)
	{
		rd_stat = read(varInt_source, buffer, BUFFERSIZE);
		if (rd_stat == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
					varChr_tokens[1]), exit(98);
		if (rd_stat > 0)
		{
			varInt_status_write = write(varInt_target, buffer, rd_stat);
			if (varInt_status_write != rd_stat || varInt_status_write == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
						varChr_tokens[2]), exit(99);
		}
	}
	if (close(varInt_source) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				varInt_source), exit(100);
	if (close(varInt_target) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				varInt_target), exit(100);
	return (0);
}
