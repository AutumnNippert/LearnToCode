//When running, put <filename to input paramers from that file into the main function
//example
/*
$ gcc .\fileIO.c -o fileIO.exe
$ ./fileIO.exe < input.txt
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    printf("%c\n", getchar());
    return 0;
}