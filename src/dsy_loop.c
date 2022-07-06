#include "func.h"

struct ins_t read_ins(void);
int excute_ins(struct ins_t command); 
bool isExit(int stat);

// It will return whether session is closed normaly
int dsy_loop(void){
    int stat;
    do {
        puts(">");

        struct ins_t instruction = read_ins();
        stat = excute_ins(instruction);

    } while(isExit(stat));
    
    return stat;
}

// if stat == -1, means user insert exit.
bool isExit(int stat){
    return (stat == -1);
}
