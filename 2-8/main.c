#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter any number : ");
    scanf("%d",&x);
    if(x&1)
        printf("It is odd number");
    else
        printf("It is even number");
    return 0;
}
