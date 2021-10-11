#ifndef SCREEN_H
#define SCREEN_H

void type_prompt(){
        static int first_time = 1;
        if(first_time){
                const char* CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
                write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 11);
                first_time = 0;
        }
        printf("NaSH>");
}

#endif
