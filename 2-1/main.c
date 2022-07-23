#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter any number : ");
    scanf("%d",&x);
    printf("Unit digit of given number is %d.",x%10);

    return 0;
}
