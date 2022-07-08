#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <stdbool.h>

#include <dirent.h> //directorys
#include <time.h>   // localtime

#include <sys/types.h>
#include <sys/stat.h>   //stat
#include <fcntl.h>      //unbuffered I/O
#include <sys/time.h>   //select
#include <sys/select.h> //select
#include <unistd.h>     //nubuffered I/O
#include <sys/mman.h>   //mmap
#include <sys/wait.h>   //wait
#include <signal.h>     //signal, sigaction

#define Error_Equal_Check(data, standard, input)    \
    do{                                             \
        if(data == standard){                       \
            perror(input);                          \
            exit(1);                                \
        }                                           \
    } while(0)

#define Error_Unequal_Check(data, standard, input)  \
    do{                                             \ 
        if(data != standard) {                      \
            puts(input);                            \
            exit(1);                                \
        }                                           \
    } while(0)

#define SIZE(data) (sizeof(data)/sizeof(data[0]))

typedef __sighandler_t sighandler_t;

// argumens set.
struct arguments_t {
    char *path;     // the The address required by the parameter
    char *para;     // paramenter required by command.
};

// instruction set.
struct ins_t{
    int argSize;                // size of arguments
    char *ins;                  // instruction
    struct argments_t *arg;      // arguments
};

void dsy_loop(void);
struct ins_t *read_ins(void);
int excute_ins(struct ins_t command); 

