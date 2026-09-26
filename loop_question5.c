// KEEP TAKING NUMBERS AS INPUT FROM USER UNTIL USER ENTERS A NUMBER WHICH IS MULTIPLE OF 7.
#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n % 7==0){
            break;
        }
    } while(1);
    printf("thank you");
    return 0;
    }
