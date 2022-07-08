#include "func.h"

// It will return whether session is closed normaly
void dsy_loop(void){
    while(true) {
        puts(">");

        struct ins_t instruction = read_ins();

        // use multi-progress
        int stat = 0;
        pid_t pid = fork();
        if(pid == 0){
            stat = excute_ins(instruction);
            
            // decide whether to quit
            if(stat == -1){
                kill(0, SIGINT);
            }

            exit(0);
        }
        wait(NULL);
    }
}
