#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a ,b;
    printf("enter the first value \n");
    scanf("%d",&a);
    printf("enter the second value \n");
    scanf("%d",&b);
    n =a;
    a=b;
    b=n;
    printf("  after swapping first number = %d",a);
    printf("\nafter swapping second number = %d",b);
    return 0;
}
