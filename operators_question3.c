//WRITE A PROGRAM TO CHECK IF GIVEN CHARACTER IS DIGIT OR NOT.

#include<stdio.h>
int main(){
    char ch;
    printf("enter a character :\n");
    scanf("%c",&ch);
    printf("%d",ch>='0' && ch<='9');
    return 0;
}
