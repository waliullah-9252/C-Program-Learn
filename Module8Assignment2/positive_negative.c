#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n<=0)
    {
         for(int i=n; i<=1; i++)
           {
               printf("%d ",i);
           }
    }
    else if(n>0)
    {
        for(int i=1; i<=n; i++)
        {
            printf("%d ",i);
        }
    }

    return 0;
}
