#include"gestionFichiers.h"
#include"exo1.h"
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>

int main(){
	pid_t fils_pid = fork();
	char pathname[60] = "/user/lapertor/Document/E3/IGI-3004/TD2/fichierTest.txt";
	int fd = open(pathname, 00);
	processus(litLigne(fd));
	return close(fd);
}