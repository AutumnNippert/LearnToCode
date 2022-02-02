//when asked to input multiple, put white spaces or returns.
#include <stdio.h>

int main(void){
    int a, b, c;
    printf("Please type in 3 numbers separated by a space or return: ");
    scanf("\n%d%d%d", &a, &b, &c);
    printf("\nYou entered:\n%d\n%d\n%d\n", a, b, c);
    return 0;
}