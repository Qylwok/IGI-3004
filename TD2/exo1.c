#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int processus(char* chaine){
	pid_t pid = getpid();
	printf("processus : %d : %s\n", pid, chaine);
	return 0;
}

int pere(char* chaine){
	pid_t ppid = getppid();
	printf("pere : %d : %s\n", ppid, chaine);
	return 0;
}

int les_deux(char* chaine){
	pid_t pid = getpid();
	pid_t ppid = getppid();
	printf("pere : %d | processus : %d : %s\n", ppid, pid, chaine);
	return 0;
}