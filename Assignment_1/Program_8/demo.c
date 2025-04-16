#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
int main (int argc, char *argv[]){
	int fd;
FILE *fp;
char ch;

	fd = open(argv[1], O_RDONLY);
     	fp = fopen("input.txt", "r") ;
	if(fd == -1||fp== NULL)
	{ 
	printf("unable to open");
	}	
	
      	
	

	// If there is some error then it returns NULL
	while((ch = fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}


	
   
    	fclose(fp);


	return 0;
}
