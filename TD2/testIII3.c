#include"gestionFichiers.h"
#include"exo1.h"
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<string.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(int argc, char* argv[]){
	char pathname[200] = "/user/lapertor/Document/E3/IGI-3004/TD2/";
	strcat(pathname, argv[1]);
	int fd = open(pathname, 00);
	pid_t fils_pid = fork();
	if(fils_pid != 0){
		wait(NULL);
	}
	processus(litLigne(fd));
	return close(fd);
}