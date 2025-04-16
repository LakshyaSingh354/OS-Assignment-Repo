	/*  Problem Statement: Write a program which accept file name from user and open that file. 
	*/

#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>


int main (int argc, char *argv[])
{
	int fd = 0;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error: File not found");
	}

	printf("File gets sucessfully open");
	close(fd);
	return 0;
}

