#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=1;t<=test;t++)
    {
        int s,a,b,c;
        scanf("%d %d %d %d",&s,&a,&b,&c);
        int sum=s-(a+b+c);
        printf("%d",sum);
        printf("\n");
    }
    return 0;
}