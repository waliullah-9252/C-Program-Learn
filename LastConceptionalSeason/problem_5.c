#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   int even=0,odd=0,t_f=0;
   for(int i=0;i<n;i++)
   {
    if(arr[i]%2==0)
    {
        even++;
    }
    if(arr[i]%2!=0)
    {
        odd++;
    }
    if(arr[i]%3==0 && arr[i]%5==0)
    {
        t_f++;
    }
   }
   printf("Even-%d\nOdd-%d\nDivisible-both-3&5-%d\n",even,odd,t_f);

    return 0;
}