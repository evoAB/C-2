#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,s,t;
    printf("Enter a three digit number : ");
    scanf("%d",&x);
    t=x%10;
    s=t;
    x/=10;
    t=x%10;
    s=s+t;
    x/=10;
    t=x%10;
    s=s+t;
    printf("The sum of digits number is %d",s);

    return 0;
}
