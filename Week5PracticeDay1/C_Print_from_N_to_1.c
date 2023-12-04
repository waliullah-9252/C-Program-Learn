#include<stdio.h>
void result(int n,int i)
{
    if(i>n)
    {
        return;
    }
    result(n,i+1);
    if(i==1)
    {
        printf("%d",i);
    }
    else
    {
        printf("%d ",i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    result(n,1);
    return 0;
}