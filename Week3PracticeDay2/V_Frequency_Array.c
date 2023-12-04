#include<stdio.h>
int main()
{
   int n,m;
   scanf("%d %d",&n,&m);
   int arr[n];
   for (int i=0;i<n;i++)
   {
    scanf("%d ",&arr[i]);
   }
   int cnt[m+1];
   for(int i=0;i<m+1;i++)
   {
    cnt[i]=0;
   }
   for(int i=0;i<n;i++)
   {
    int value=arr[i];
    cnt[value]++;
   }
   for(int i=1;i<m+1;i++)
   {
    printf("%d\n",cnt[i]);
   }
   

    return 0;
}