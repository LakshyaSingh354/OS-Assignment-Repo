	/*  Problem Statement: Write a program which accept file name and number of bytes from user and read that
				number of bytes from file.
	*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

int main (int argc, char *argv[])
{
	int fd = 0, ret = 0;
	char arr  [50];
	//int crr [] = argv[2];
	if(argc != 3)
	{
		printf("Error:Insufficient arguments");
		return -1;
	}


	fd = open (argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error: unable to read");
	}	
	ret = read(fd, arr, argv[2]);
	write(1, arr, ret);
	printf("Data read %c \n", &arr);
	close(fd);
	
	return 0;
}
