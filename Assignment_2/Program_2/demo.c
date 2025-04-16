
	/*  Problem Statement: Write a program which accept file name and mode from user and then open that file in
				specified mode.
	*/
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>


int main (int argc, char *argv[])
{
	int fd = 0;
	char mode = argv[2];
	fd = open(argv[1], mode);
	if (fd == -1)
	{
		printf("Error: File not found");
	}

	printf("File gets sucessfully open");
	close(fd);
	return 0;
}

