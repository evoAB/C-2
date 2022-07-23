#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Before swap\na=%d b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap\na=%d b=%d",a,b);
    return 0;
}
