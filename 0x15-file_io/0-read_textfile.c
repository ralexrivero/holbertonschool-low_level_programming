 #include "main.h"
/**
* read_textfile - reads a text file and prints in POSIX stdout
* @filename: file to read
* @letters: number of letter it should read and print
* Return: actual number of letter it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int varInt_file, varInt_count, varInt_stats;
	char arrChr_buff[BUFFERSIZE];

	if (filename == NULL)
		return (0);
	varInt_file = open(filename, O_RDONLY);
	if (varInt_file == -1)
		return (0);
	varInt_count = 0;
	varInt_stats = 1;
	while (letters > BUFFERSIZE && varInt_stats != 0)
	{
		varInt_stats = read(varInt_file, arrChr_buff, BUFFERSIZE);
		write(STDOUT_FILENO, arrChr_buff, varInt_stats);
		varInt_count += varInt_stats;
		letters -= BUFFERSIZE;
	}
	varInt_stats = read(varInt_file, arrChr_buff, letters);
	write(STDOUT_FILENO, arrChr_buff, varInt_stats);
	varInt_count += varInt_stats;
	close(varInt_file);
	return (varInt_count);
}

