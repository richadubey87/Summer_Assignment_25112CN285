#include<stdio.h>

    int main(){
        int n, digit;
        int product = 1;

        printf("enter a number");
        scanf("%d",&n);

        while(n>0){
            digit =n%10;
            product = product*digit;
            n = n/10;

        }
        printf(" product of digits= %d",product);
         return 0;
    }
