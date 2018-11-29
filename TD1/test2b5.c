#include</user/lapertor/Document/E3/IGI-3004/TD1/gestionFichiers.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<string.h>

/*
~ nique ta race l'exercice <3
*/

int main(int argc, char *argv[]){
	char pathname[60] = "/user/lapertor/Document/E3/IGI-3004/TD1/fichierTest.txt";
	int fd = open(pathname, 00);
	char* une_ligne = litLigne(fd);
	unsigned int i = 1;
	while(strcmp(une_ligne, "ERREUR")){
		une_ligne = litLigne(fd);
		i++;
	}
	printf("Nombre de lignes : %d\n", i);
	return close(fd);
}