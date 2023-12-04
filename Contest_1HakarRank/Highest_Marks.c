#include<stdio.h>
#include<limits.h>
int main()
{
   int n,max=INT_MIN;
   scanf("%d",&n);
   int marks[n];
   for(int i=0;i<n;i++){
        scanf("%d",&marks[i]);
        if(marks[i]>max){
            max=marks[i];
        }
   }
    for(int i=0;i<n;i++){
        int rem=max-marks[i];
        printf("%d ",rem);
   }
    return 0;
}
