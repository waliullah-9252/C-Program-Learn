#include<stdio.h>
#include<string.h>
int main()
{
     int test;
     scanf("%d",&test);
     char s[101];
     for(int t=0;t<test;t++)
     {
        scanf("%s",s);
        int ln=strlen(s);
        if(ln<=10)
        {
            printf("%s\n",s);
        }
        else if(ln>10)
        {
            printf("%c%d%c\n",s[0],ln-2,s[ln-1]);
        }
     }

   return 0;
}
