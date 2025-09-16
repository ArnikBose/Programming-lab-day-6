#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter an integer to display its multiplication table:");
    scanf("%d",&num);
    printf("\nMultiplication table for%d:\n num");
    printf("\n");
    for(i=1;i<=10;i++){
        printf("%d*%d=%d",num,i,num*i);
    }
    return 0;
}