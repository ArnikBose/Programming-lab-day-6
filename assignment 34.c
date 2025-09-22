#include <stdio.h>

int main() {
    int n, i, term1 = 0, term2 = 1, nextTerm, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    if (n <= 0) {
        printf("\nInvalid input. Please enter a positive number of terms.\n");
        return 1; 
    }
    printf("%d ", term1);
    sum += term1;
    if (n >= 2) {
        printf("%d ", term2);
        sum += term2;
    }
    for (i = 3; i <= n; i++) {
        nextTerm = term1 + term2;
        printf("%d ", nextTerm);
        sum += nextTerm;
        term1 = term2;
        term2 = nextTerm;
    }

    printf("\nSum of the Fibonacci series: %d\n", sum);

    return 0; 
}
