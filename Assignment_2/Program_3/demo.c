	/*   Problem Statement: Write a program which accept file name and on mode and that program check whether our
				process can access that file in accepted mode or not.
	*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


int main (int argc, char *argv[])
{
	int fd = 0;
	int mode = 0;

	if((strcmp(argv[2],"read")==0)
	{
		mode = 1;
	}
	else if((strcmp(argv[2],"write")==0))
	{
		mode = 2;
	}
	else if((strcmp(argv[2],"execute")==0))
	{
		mode = 3;
	}
	else
	{
		printf("Error : Invalid Mode");
		return -1;
	}
	
	fd = access(argv[1],F_OK);
	
	if(fd==0)
	{
		switch(mode)
		{
			case 1 : fd = access(argv[1],R_OK);
				 if(fd==0)
				 {
				 	printf("File is accessible to read for process\n");
				 }
				 else
				 {
				 	printf("File is not accessible to read (Access denied !)\n");
				 }
				 break;
				 
			case 2 : fd = access(argv[1],W_OK);
				 if(fd==0)
				 {
				 	printf("File is accessible to write for process\n");
				 }
				 else
				 {
				 	printf("File is not accessible to write (Access denied !)\n");
				 }
				 break;
				 
			case 3 : fd = access(argv[1],X_OK);
				 if(fd==0)
				 {
				 	printf("File is accessible to execute for process\n");
				 }
				 else
				 {
				 	printf("File is not accessible to execute (Access denied !)\n");
				 }
				 break;
		}
	}
	else
	{
		printf("Error : %s dosn't exist\n",argv[1]);
		return -1;
	}
return 0;
}

