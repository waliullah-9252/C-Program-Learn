#include<stdio.h>
void result(int n)
{
    //base case
    if(n==0)
    {
        return;
    }
    int a=n%10;//n=1234 so n%is 4
    result(n/10);
    printf("%d ",a);
}
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=1;t<=test;t++)
    {
        int n;
        scanf("%d",&n);
        result(n);
        if(n==0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}