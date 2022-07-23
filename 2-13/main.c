#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,s;
    printf("Enter three digit number : ");
    scanf("%d",&x);
    s=x%10;
    x/=10;
    x=s*100+x;
    printf("Rotated number : %d",x);
    return 0;
}
