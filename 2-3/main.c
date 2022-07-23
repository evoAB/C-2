#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Before swap\na=%d b=%d",a,b);
    temp = a;
    a=b;
    b=temp;
    printf("\nAfter swap\na=%d b=%d",a,b);
    return 0;
}
