//PRINT THE NUMBER FROM 0 TO N ,IF N IS GIVEN BY USER.

#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=0; i <=n; i++){
        printf("%d\n",i);
    }
    return 0;
}