// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b+c)*(a+b+c)*(a+b+c);
    printf("the sum=%d",d);
    return 0;
}