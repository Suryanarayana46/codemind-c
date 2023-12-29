#include<stdio.h>
int main()
{
    int x,y;
    float z;
    scanf("%d%d",&x,&y);
    z=(100.0*y-100.0*x)/x;
    printf("%.2f",z);
}