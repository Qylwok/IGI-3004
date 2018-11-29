#include</user/lapertor/Document/E3/IGI-3004/TD1/gestionFichiers.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>

int main(){
	char pathname[60] = "/user/lapertor/Document/E3/IGI-3004/TD1/fichierTest.txt";
	int fd = open(pathname, 00);
	char* une_ligne = litLigne(fd);
	printf(une_ligne);
	printf("\n");
	return close(fd);
}