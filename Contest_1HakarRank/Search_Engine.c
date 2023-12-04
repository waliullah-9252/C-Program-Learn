#include<stdio.h>
int main()
{
   int test;
   scanf("%d",&test);
   for(int i=1;i<=test;i++)
   {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int s;
        scanf("%d",&s);
        int pos=-1;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==s)
            {
                pos=i;
                break;
            }
        }
        if(pos!=-1)
        {
            printf("Case %d: %d\n",i,pos);
        }
        else
        {
            printf("Case %d: Not Found\n",i);
        }
   }
        
    return 0;
}