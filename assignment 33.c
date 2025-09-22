#include <stdio.h>

int main() {
    int num, i;
    long long factorial = 1; 

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else if (num == 0) {
        printf("The factorial of 0 is 1.\n");
    } 
    else {
        for (i = 1; i <= num; i++) {
            factorial *= i; 
        }
        printf("The factorial of %d is %d.\n", num, factorial);
    }

    return 0;
}
