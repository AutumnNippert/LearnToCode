#include <stdio.h>
int main(void){
    int i = 2;
    switch (i) {
        case 1:
            printf("i = %d = 1", i);
            break;
        case 2:
            printf("i = %d = 2", i);
            break;
        default:
            printf("i = %d = default", i);
    }
    return 0;
}