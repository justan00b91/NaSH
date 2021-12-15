#ifndef LEXER_H
#define LEXER_H

void read_command(char cmd[], char* par[]){
        char line[40]={[0 ... 39] = 00};
        int count=0, i=0, j=0;
        char* array[20]={[0 ... 19] = 00}, *pch;
        while(1){
                int c = fgetc(stdin);
                line[count++] = (char) c;
                if(c == '\n'){
                        break;
                }
        }      
	pch = strtok(line, " \n");
        while(pch != NULL){
                array[i++] = strdup(pch);
                pch = strtok(NULL," \n");
        }
        strcpy(cmd, array[0]);
        for(int j=0; j<i; j++){
                par[j] = array[j];
        }
        par[i] = NULL;
}

#endif
