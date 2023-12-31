#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int c=y*30;
    if(x>=c)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }    
}