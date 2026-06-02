#include<stdio.h>
int main(){
    int num,i,table;
    printf("enter a number");
    scanf("%d" ,&num);

    for(i=1;i<=10;i++){
        table=num*i;
printf("%d\n",table);}
return 0;
}