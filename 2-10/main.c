#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,x;
    printf("Enter any number : ");
    scanf("%d",&x);
    s=x%10;
    x=x-s;
    printf("Number that get store zero at last : %d",x);
    return 0;
}
