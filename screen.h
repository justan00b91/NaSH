#ifndef SCREEN_H
#define SCREEN_H

void cls_scr(){
	const char* CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
        write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 11);
}

void starter(){
        printf("NaSH>");
}

void version(){
		printf("\nNaSH, version 0.0.1-release\nCopyright (C) 2021 Mozilla Public License Version 2.0\nThis is free software; see the source for copying conditions.  There is NO\nwarranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n\n");
}


#endif
