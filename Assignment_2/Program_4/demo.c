	/*   Problem Statement: Write a program which accept file name from user and print all information about that file.

	*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <time.h>
int main (int argc, char *argv[])
{
	int fd = 0, ret = 0;
	struct stat sfile;
	
	if(argc != 2)
	{
		printf("Error:Insufficient arguments");
		return -1;
	}


	fd = open (argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error: unable to read");
	}	
	stat(argv[1], &sfile);
	printf("Device ID = %ld \n", sfile.st_dev);
	printf("Inode Number = %ld \n", sfile.st_ino);
	printf("Size of file = %d \n", sfile.st_size);
	printf("Last file access: %s", ctime(&sfile.st_atime));
  	printf("Last status change: %s", ctime(&sfile.st_ctime));
	printf("Last file modification: %s", ctime(&sfile.st_mtime));
	printf("Block SIze = %d \n", sfile.st_blksize);
	printf("blocks = %d \n", sfile.st_blocks);
	printf("link = %d \n", sfile.st_nlink);
	printf("uid = %ld \n", sfile.st_uid);
	printf("gid = %ld \n", sfile.st_gid);
	printf("mode = %0 \n", sfile.st_mode);
	close(fd);

	
	return 0;
}
