#include<stdio.h>
int main(){
    int n,i,c =1;

    printf("enter a number");
    scanf("%d",&n);
    
    if(n<=1){
        c =0;
    }else{
        for(i=2;i<=n/2;i++){
            if(n %i== 0){
                c = 0;
                break;
            }
        }
    }
if(c==1)
printf("%d is a prime number");
else  
printf("%d is not a prime number");
return 0;
}