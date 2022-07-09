#include "func.h"

#define BUFFER_SIZE 1024

enum element{

};

struct ins_t *analyze_ins(const char *ins, int size){
    struct ins_t *instruction = (struct ins_t *)calloc(1, sizeof(struct ins_t));
    int position = 0;

    // analyze commands
    while(position < 0){
        
    }
}

struct ins_t *readline(void)
{
    // create and init the space of command.
    int buffsize = BUFFER_SIZE;
    int position = 0;
    char *buf = (char *)calloc(1, sizeof(char) * BUFFER_SIZE);
    ERROR_EQUAL_CHECK(buf, NULL, "calloc");

    // get ins from STDIN_FILENO
    char ch;
    while(true){
        ch = getchar();

        // check ch is whether '\n' of EOF, and replace it with '\0'.
        if(ch == '\n' || ch == EOF){
            buf[position++] = '\0';
            break;
        }else{
            buf[position++] = ch;
        }

        // check buff size. if overflowing, replace it with a bigger size.
        if(position >= buffsize){
            char *temp = buf;
            buffsize += BUFFER_SIZE;
            buf = (char *)calloc(1, sizeof(char) * buffsize);
            ERROR_EQUAL_CHECK(buf, NULL, "calloc");
            memcpy(buf, temp, buffsize - BUFFER_SIZE);
            free(temp);
        }
    }

    // analyze the instruction
    struct ins_t *instruction = analyze_ins(buf, position);

    return instruction;
}

