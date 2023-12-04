#include<stdio.h>
void result(int n,int i)
{
    if(i==n+1)
    {
        return;
    }
    printf("%d\n",i);
    result(n,++i);
}
int main()
{
    int n;
    scanf("%d",&n);
    result(n,1);
    return 0;
}