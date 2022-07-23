#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, count = 0,s=0;

    printf("Enter any number : ");
    scanf("%d",&x);
    while(1)
    {
        s=x&1;
        count++;
        if(s==1)
        {
            printf("The position of first 1 lsd : %d",count);
            break;
        }
        x=x>>1;
    }
    return 0;
}
