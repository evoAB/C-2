#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,s;
    printf("Enter any number : ");
    scanf("%d",&x);
    printf("Enter the digit to append : ");
    scanf("%d",&s);
    x*=10;
    x=x+s;
    printf("The resulting number is %d.",x);

    return 0;
}
