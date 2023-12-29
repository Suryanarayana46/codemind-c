#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=2*b;
    if(c<=a)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}