#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
   }
   for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
   }
   int flag=0;
   int count=0;
   for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+1 == arr[j]){
                flag=1;
                count++;
                break;
            }
        }
   }
   if(flag==1){
        printf("%d",count);
   }else{
        printf("0");
   }

    return 0;
}