// WRITE A PROGRAM TO PRINT THE AVERAGE OF 3 NUMBERS.

#include<stdio.h>
int main(){
    float num1, num2, num3;
    printf("enter the three numbers :\n");
    scanf("%f %f %f",&num1, &num2, &num3);
    printf("average of three numbers is %f",(num1+num2+num3)/3);
    return 0;
}