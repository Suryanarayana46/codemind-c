#include<stdio.h>
int main()
{
    int x,i,sum=0;
    scanf("%d",&x);
    for(i=0;i<=x;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}