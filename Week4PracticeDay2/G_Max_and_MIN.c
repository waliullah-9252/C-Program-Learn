#include<stdio.h>
#include<limits.h>
void min_max(int arr[],int a,int *min,int *max)
{
    *min=arr[0];
    *max=arr[0];
    for(int i=0; i<a; i++)
    {
        if(*min>arr[i])
        {
            *min=arr[i];
        }
        if(*max<arr[i])
        {
            *max=arr[i];
        }
    }


}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min,max;
    min_max(arr,n,&min,&max);
    printf("%d %d",min,max);

    return 0;
}
