#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
int TAILLEBUF = 1300;

char* litDixCaracteres(int desc_file){
	char* adresse = malloc(11 * sizeof(char));
	read(desc_file, adresse, 10*sizeof(char));
	adresse[10*sizeof(char)] = '\0';
	return adresse;
};

char* litLigne(int desc_file){
	char* adresse = malloc((TAILLEBUF+1)*sizeof(char));
	char caractere = '\0';
	unsigned int i = 0;
	while(caractere != '\n' && i < TAILLEBUF){
		read(desc_file, adresse + i*sizeof(char), sizeof(char));
		caractere = adresse[i*sizeof(char)];
		//printf("Caractère n%d= %c\n", i, caractere);
		i++;
	}
	if(i == TAILLEBUF){
		//printf("Entrée if i = taillebuf\n");
		return "ERREUR";
	}
	else{
		//printf("Entrée else\n");
		adresse[i*sizeof(char)] = '\0';	// i+1 ?
		//printf("Adresse de 0 : %c", adresse[0*sizeof(char)]);
		//printf("Adresse de 1 : %c", adresse[1*sizeof(char)]);
		return adresse;
	}

};