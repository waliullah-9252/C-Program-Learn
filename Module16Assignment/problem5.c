#include<stdio.h>
#include<string.h>
int is_palindrome(char x[])
{
    int ln=strlen(x);
    int palendrome=1;
    int i=0,j=ln-1,temp;
    while(i<j)
    {
        temp=x[i];
        x[i]=x[j];
        x[j]=temp;
        i++;
        j--;
        if(x[i]!=x[j])
    {
        return 0;
    }
    }
    return 1;
}
int main()
{
   char a[10];
   gets(a);
   is_palindrome(a);
   if(is_palindrome(a))
   {
    printf("Palindrome\n");
   }
   else
   {
    printf("Not Palindrome\n");
   }

    return 0;
}