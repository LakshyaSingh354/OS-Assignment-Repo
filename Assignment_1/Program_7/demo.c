#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
int main (int argc, char *argv[]){
	int fd;
	FILE *fp;
	char ch[6];

	fd = open(argv[1], O_RDONLY);
      	fp = fopen("input.txt", "r") ;
	if(fd == -1||fp== NULL)
	{ 
	printf("unable to open");
	}	
	
      	
	
	fread(ch,1,5,fp); // fread is used for the read the data from file

//
        ch[5] = '\0'; 
        
	printf("%s",ch);
            
    

	
   
    fclose(fp);


	return 0;
}
