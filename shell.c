#include"include.h"
#include"screen.h"
#include"lexer.h"

int main(){
	char cmd[100], command[100], *parameters[20];
	char* envp[] = { (char*) "PATH=/bin",0 };
	cls_scr();
	while(1){
		starter();
		read_command ( command, parameters );
		if(fork() != 0){
			wait( NULL );
		}
		else{
			strcpy(cmd, "/bin/");
			strcat(cmd, command);
			execve(cmd, parameters, envp);
		}
		if ( strcmp(command, "exit") == 0){
			break;
		}
		if(strcmp(command, "clear") == 0){
			cls_scr();
		}
	}
	return 0;
}
