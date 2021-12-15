#include"include.h"
#include"screen.h"
#include"lexer.h"

int main(){
	if( access( "donut", F_OK ) != 0 ){
		int a = system("gcc donut.c -o donut -lm");
		if( a != 0 ){
			printf("ERROR!\nOne or More Files missing!!!\n");
			exit(1);
		}
	}
	char cmd[20], command[20], *parameters[20];
	char* envp[] = { (char*) "PATH=/bin",0 };
	cls_scr();
	version();
	while(1){
		starter();
		read_command ( command, parameters );
		 if ( strcmp(command, "exit") == 0){
                        return 7;
                }
		else if( (strcmp(command, "screensaver") == 0) || (strcmp(command, "ss") == 0) ){
			cls_scr();
			system("./donut");
		}
		if(fork() != 0){
			wait( NULL );
		}
		else{
			strcpy(cmd, "/bin/");
			strcat(cmd, command);
			execve(cmd, parameters, envp);
		}
		if(strcmp(command, "clear") == 0){
			cls_scr();
		}
	}
	return 0;
}
