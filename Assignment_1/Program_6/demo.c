#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
int main (int argc, char *argv[]){
	int fd;
	fd = open(argv[1], O_RDONLY);
	if(fd == -1)
	{ 
	printf("unable to open");
	}	
	printf("open successfully");


	return 0;
}
