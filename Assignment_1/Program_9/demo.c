#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
int main (int argc, char *argv[]){
	int fd;
FILE *fp=NULL;
FILE *fp1=NULL;
char ch;
int i = 0;
char str[] ="Hello world";

	fd = open(argv[1], O_RDONLY);
      fp = fopen("input.txt", "r") ;
	if(fd == -1||fp== NULL)
	{ 
	printf("unable to open");
	}	
	
      	
	// First parameter :	Array in which data is to be read
	// Second parameter :	Number of character to read
	// Third parameter :	File pointer

	// If there is some error then it returns NULL
	while((ch = fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}


	
   
    fclose(fp);
fp1 = fopen("input.txt","a");
	if(fp1 == NULL)
	{
		printf("Unable to open file\n");
	}

	printf("Writing contents into the file\n");
	while(str[i]!= '\0')
	{
		fputc(str[i],fp1);
		
		i++;
	}

	// Close the opened file
	fclose(fp1);


	return 0;
}
