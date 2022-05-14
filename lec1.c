#include <stdio.h>
// Notes for ECE250 LECTURE 1

/*
Operating System
    -manages resources
    -manage applications
    -cpu time
    -mem management
    -I/O
    -Network
    -File System
    -abstract hardware via drivers
    -linux-kernel
    -operating system is gnu/linux
    -kernel is the operating system of the OS
    -system calls, interrupts
    -exceptions
    -shell login, libraries
    -nice, find, grep,utilities,who,top(task manager),screen(multiple terminals
open in the same terminal),kill

*/

/*

System Programming
    -programs that interact with the kernel via system calls
    -file IO
    -Communication with sockets or shared memory
    -creating other processes
    -concurrency, multiple tasks executing at the same time(parallel, linear?)
        -> two or more actions in progress at the same time
*/

/*

Processes
    -an instance of an executing program
    -memory is organized into 4 segments
    -BSS zeroed output area                           Text section <- (machine
instructions .... read only)
                                                -----------------------
   Low address at the top 0x0000-0000           |         data         | <-
global/static data that doesn't lose it's value (constant)
                                                -----------------------
                                                |         heap         |    <-
dynamically linked libraries (m-map)
                                                                            <-dynamic
data ,malloc and new **
                                                          .....


                                                 -----------------------
                                                |        STACK         | <-local
variables

*/

// Programming in C vs C++
/*
Class vs Struct

Public Vs Private

Pass BY VALUE

Pass by ref dne

???????


Return codes or error numbers


tag identifier
struct s{


    char a;
    int b;

};

struct s x;

x.a=0;
x.b=1;

typedef struct{
    char a;
    int b;

} s_t;

s_t y= {0,1};
s_t y= {.b=1};

z=(s_t) {2,3};



constants

eg #define     BUF_SIZE 1000
"macro"

const int N=10;
(not really a constant)

bool is a macro that you can defined in c
#include <stdbool.h>


malloc and realloc
malloc() and realloc();

calloc(); you can initialize the memory

#include <stdlib.h>

int *x=malloc(sizeof(int));

return type of malloc is void ptr


*/
int main(int argc, char const *argv[]) {
  printf("Hello world \n");
  return 0;
}
