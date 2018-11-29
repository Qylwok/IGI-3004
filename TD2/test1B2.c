#include"exo1.h"
#include <unistd.h>


int main(){
	pid_t fils_pid = fork();
	les_deux("bonjour");
	if(fils_pid == 0){
		processus("fils");
	}
	else{
		processus("pere");
	}
	return 0;
}