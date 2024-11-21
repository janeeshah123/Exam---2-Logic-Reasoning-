#include <stdio.h>
float cube(float num) {
    return num *num *num;  
}
int main() {
    float number, result;
    printf("Enter a number to find its cube: ");
    scanf("%f", &number);
    result = cube(number);
    printf("The cube of %.2f\n", number, result);
    return 0;
}
