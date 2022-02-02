//UNARY OPERATORS
/*
IF PLACED BEFORE, IT DOES THE OPERATION BEFORE ITS USE IN LETS SAY, A PRINTF STATEMENT
IF PLACED AFTER, IT DOES THE OPERATION AFTER ITS USE IN LETS SAY, A PRINTF STATEMENT
+ is positive
- is negative
~ is bitwise compliment (makes it negative - 1, so you + 1 to get the negative value as seen below)
++ is add one
-- is minus one
*/
#include <stdio.h>
int main(void){
    int i;
    int e = 4;
    i = ~e+1;
    printf("%d\n", i);
    printf("%d\n", e++);
    printf("%d\n", e);
}