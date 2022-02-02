#include <stdio.h>
#include <math.h>

int main(void){
    int count = 500;
    double sum = 0;
    int power = 0;
    while(count > 0) {
        sum += pow(-1, power)/(((power * 2) + 1 ) * pow(3, power));
        power ++;
        count --;
    }
    double product = sqrt(12) * sum;
    printf("%f\n", product);
    return 0;
}