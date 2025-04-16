	/*  Problem Statement: Write a program which accept file name from user and read whole file.
	*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int fd = 0,ret = 0;
	char arr[500];
	
	
	fd = open(argv[1],O_RDONLY);
	
	ret = read(fd,arr,500);
	write(1,arr,ret);
	close(fd);
	
	
	return 0;
	
}
