#include<stdio.h>
#include<string.h>
int main()
{
   char a[11],b[11];
   gets(a);
   gets(b);
   int len=strlen(a);
   int len1=strlen(b);
   printf("%d %d\n",len,len1);
   printf("%s%s\n",a,b);
   int temp,temp1;
   temp=a[0];
   temp1=b[0];
   a[0]=temp1;
   b[0]=temp;
   printf("%s %s",a,b);

    return 0;
}