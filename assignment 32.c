#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter a positive number:");
scanf("%d",&n);
if(n<=0){
    printf("please enter a positive integer.\n");
    return 1;
}
for(i=1;i<=n;i++){
    sum=i;
}
printf("The sum of the first %d natural number is:%d\n",sum,n);
return 0;
}