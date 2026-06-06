#include<stdio.h>
int main(){
    int n, original, rev=0, digit;
    printf("enter a number");
    scanf("%d" ,&n);
    original = n;
    while(n!=0){
        digit = n%10;
        rev =rev*10 + digit;
        n=n/10;
    }
    if( original == rev)
    printf("palindrome number");
    else
    printf("not a palindrome");

    return 0;
}