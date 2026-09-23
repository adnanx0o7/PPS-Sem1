#include <stdio.h>
int main()
{
    int a,b,c;
    printf("write the selling price:");
    scanf("%d",&a);
    printf( "write the cost price");
    scanf("%d",&b);
    if (a>b)
    {
        printf("profit");
    }
    else
    {
        printf("loss");
    }
    return 0;
}

