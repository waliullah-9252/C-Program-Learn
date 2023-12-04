#include<stdio.h>
#include<string.h>
int main()
{
   char s[1001];
   gets(s);
   int ln=strlen(s);
   int palendrom=1;
   int i=0,j=ln-1,temp;
   while(i<j)
   {
    temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    i++;
    j--;
    if(s[i]!=s[j])
    {
        palendrom=0;
        break;
    }
   }
   if(palendrom==1)
   {
    printf("YES");
   }
   else
   {
    printf("NO");
   }

    return 0;
}
