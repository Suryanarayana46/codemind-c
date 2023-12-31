#include<stdio.h>
int main()
{
    int h,sf,spf;
    scanf("%d%d%d",&h,&sf,&spf);
    if(h>50 && sf>60 && spf>100)
    {
        printf("%d",10);
    }
    else if(h>50 && sf>60)
    {
        printf("%d",9);
    }
    else if(sf>60 && spf>100)
    {
        printf("%d",8);
    }
    else if(h>50 && spf>100)
    {
        printf("%d",7);
    }
    else if(h>50 || sf>60 || spf>100)
    {
        printf("%d",6);
    }
    else
    {
        printf("%d",5);
    }
}