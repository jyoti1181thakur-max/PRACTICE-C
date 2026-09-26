// PRINT THE SUM OF FIRST N NATURAL NUMBERS.ALSO,PRINT THEM IN REVERSE ORDER.
#include<stdio.h>
int main(){
    int n;
    printf(" enter the number :");
    scanf("%d",&n);
    int sum=0;
    for(int i=1; i<=n; i++){
        sum = sum +i;
    }
    printf(" sum is %d\n",sum);
    printf(" numbers in reverse order are:\n");
    for( int i=n; i>=1; i--){
        printf("%d\n",i);
    }
    return 0;

}