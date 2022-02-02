#include <stdio.h>
#include <stdlib.h>

int main(void){

    //Creating the string variable with max size 100 chars (which its actually type char*)
    char str[100];
    printf("Please type something in with at least 1 space: ");

    //Scanning in everything until new line
    //"%[^\n]" is actually a char*
    scanf("%[^\n]", str);

    printf("You typed: %s\n", str);
    return 0;
}