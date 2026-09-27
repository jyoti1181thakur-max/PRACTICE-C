// WRITE A PROGRAM TO CALCULATE PERIMETER OF RECTANGLE.TAKE LENGTH AND BREADTH FROM THE USER.

#include<stdio.h>
int main(){
    int length,breadth;
    printf("enter the length of rectangle :");
    scanf("%d",&length);
    printf("enter the breadth of rectangle :");
    scanf("%d",&breadth);

    printf("perimeter of rectangle is %d\n",2*(length+breadth));
    return 0;

}