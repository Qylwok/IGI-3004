#include"exo1.h"
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>



int main(){
	pid_t fils_pid = fork();
	les_deux("bonjour");
	if(fils_pid == 0){
		processus("fils");
	}
	else{
		processus("pere");
		wait(NULL);
	}
	return 0;
}