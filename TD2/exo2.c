#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include"exo1.h"

int main(){
	pid_t fils_pid = fork();
	if(fils_pid == 0){
		execvp("/user/lapertor/Document/E3/IGI-3004/TD2/test1B1", NULL);
	}
	else{
		processus("Je suis le pere");
		wait(NULL);
	}
	return 0;
}