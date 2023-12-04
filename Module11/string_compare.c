#include<stdio.h>
int main()
{
   char a[100],b[100];
   scanf("%s %s",a,b);
   int i=0;
   while(1)
   {
    if(a[i]=='\0' && b[i]=='\0')
    {
        printf("Same\n");
        break;
    }
    else if(a[i]=='\0')
    {
        printf("A is a Samaller\n");
        break;
    }
    else if(b[i]=='\0')
    {
        printf("B is a Samller\n");
        break;
    }

    if(a[i]==b[i])
    {
        i++;
    }
    else if(a[i]>b[i])
    {
        printf("B is a Smaller\n");
        break;
    }
    else
    {
        printf("A is a Smaller\n");
        break;
    }


   }

    return 0;
}