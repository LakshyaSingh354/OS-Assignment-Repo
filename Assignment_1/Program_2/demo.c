#include<stdio.h>
int main (int argc, char *argv[]){
	//char name;
	int i;
	
	if (argc > 3){
	printf("Enter only valid arguments");
	return -1; 	
	}
	
  	printf("%s\n", argv[1]);
	


	return 0;
}
