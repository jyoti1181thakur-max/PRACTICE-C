// WRITE A PROGRAM TO CALCULATE PERIMETER OF RECTANGLE.
#include<stdio.h>
int main(){
    int length , breadth,perimeter;
    printf("enter the length of rectangle\n");
    scanf("%d",&length);
    printf("enter the breadth of rectangle\n");
    scanf("%d",&breadth);
    perimeter= 2*(length+breadth);
    printf("perimeter of rectangle is %d",perimeter);
    return 0;
}