#include <stdio.h>
#include <math.h>

int main () {
    float num1, num2, result;
    scanf("%f %f", &num1, &num2);
    num1 = sqrt(num1);
    num2 = sqrt(num2);
    result = num1 + num2;
    printf("%.2f", result);
    return 0;
}