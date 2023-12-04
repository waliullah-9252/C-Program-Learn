#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   char arr[n];
   int sum=0;
   for(int i=0;i<n;i++)
   {
    scanf("%s",&arr[i]);
   }
   for(int i=0;i<n;i++)
   {
    int val=arr[i]-'0';
    sum+=val;
   }
   printf("%d",sum);

    return 0;
}