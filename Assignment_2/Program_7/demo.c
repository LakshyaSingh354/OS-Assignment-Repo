	/*  Problem Statement: Write a program which accept file name from user and write string in that file.
	*/

#include <stdio.h>
#include <fcntl.h>

int main (int argc, char *argv[])
{

	int fd =0, offset, ret;
	char buff [] = "Hello there, I am new text \n";
	char buff2[sizeof(buff)];

	fd = open(argv[1], O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open file \n");
		return -1;
	}
	ret = write(fd,buff,sizeof(buff));


	if(ret != sizeof(buff))
	{
		printf("Unable to write contents\n");
	}
	lseek(fd,0,SEEK_SET);

	ret = read(fd,buff2,sizeof(buff2));
	printf("Written contents are : %s\n",buff2);
	close(fd);
	close(ret);
	

return 0;
}
