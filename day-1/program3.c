#include<stdio.h>
int main(){
    int n,factorial=1,i;
    printf("enter a number");
    scanf("%d" ,&n);
    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
printf("factorial of a given number is %d",factorial);
return 0;
}