#ifndef SCREEN_H
#define SCREEN_H

void cls_scr(){
	const char* CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
        write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 11);
}

void starter(){
        printf("NaSH>");
}

#endif
