/*
 * second1.c++ a program with system call
 */ 
#include <unistd.h>
#define LEN 19
int main() // second1.c++
{
    char str[LEN] = "My second program\n";
    write(1, str, LEN);  // STDOUT_FILENO=1    
    _exit(0) ;
}

