#include <stdio.h>
int main(void){
    int m = 1;
    int n = 2;
    //Like an if statement, just in one line
    //(condition) ? (doIfTrue) : (doIfFalse);
    (m > n) ? printf("M is greater than N") : printf("N is greater or equal to M");
    return 0;
}