#include <stdio.h>

int main() {
    int low, high, i, j, flag;
    printf("Enter the lower limit of the range: ");
    scanf("%d", &low);
    printf("Enter the upper limit of the range: ");
    scanf("%d", &high);

    printf("Prime numbers between %d and %d are: ", low, high);
    for (i = low; i <= high; i++) {
        if (i <= 1) {
            continue; 
        }
        flag = 0; 
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1; 
                break;    
            }
        }
        if (flag == 0) {
            printf("%d ", i);
        }
    }
    printf("\n"); 

    return 0; 
}
