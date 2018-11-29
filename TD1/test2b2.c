#include</user/lapertor/Document/E3/IGI-3004/TD1/gestionFichiers.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
	char pathname[200] = "/user/lapertor/Document/E3/IGI-3004/TD1/";
	strcat(pathname, argv[1]);
	int fd = open(pathname, 00);
	char* une_ligne = litLigne(fd);
	printf(une_ligne);
	printf("\n");
	return close(fd);
}