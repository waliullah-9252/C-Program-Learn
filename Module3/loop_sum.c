#include<stdio.h>
int main()
{
    int sum=0;
    int i,number;
    scanf("%d",&number);
    for(i=1; i<=number; i=i+3)
    {
        sum+=i;
       
    }
     printf("%d\n",sum);

     printf("\n\n");

     //again this code 

    return 0;
}