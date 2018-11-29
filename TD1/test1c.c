#include</user/lapertor/Document/E3/IGI-3004/TD1/gestionFichiers.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>

int main(){
	char pathname[60] = "/user/lapertor/Document/E3/IGI-3004/TD1/fichierTest.txt";
	int fd = open(pathname, 00);
	char* dix_caracteres = litDixCaracteres(fd);
	printf(dix_caracteres);
	printf("\n");
	return close(fd);
};