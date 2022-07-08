#include "func.h"

#define Maxsize 1024

struct ins_t *analyze_ins(char *ins){

}

struct ins_t *readline(void)
{
    // read ins from STDIN
    char buf[Maxsize];
    read(STDIN_FILENO, buf, SIZE(buf));

    // analyze the instruction
    struct ins_t *ins = (struct ins_t *) malloc(sizeof(struct ins_t));
    ins = analyze_ins(buf);
    
    return ins;
}

