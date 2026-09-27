// WRITE A PROGRAM THAT DECLARES AN INT,FLOAT AND CHAR VARIABLE,THEN PRINTS ALL THREE VARIABLES.

#include<stdio.h>
int main(){
    int a;
    float b;
    char c;
    printf("enter an integer :");
    scanf("%d",&a);
    printf("enter a float :");
    scanf("%f",&b);
    printf("enter a character :");
    scanf(" %c",&c);//space before %c is used to consume any whitespace characters left in the input buffer

    printf("integer is %d\n",a);
    printf("float is %f\n",b);
    printf("character is %c\n",c);
    return 0;

}