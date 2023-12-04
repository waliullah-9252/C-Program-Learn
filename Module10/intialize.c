#include<stdio.h>
int main()
{
   char a[10]={'W','a','l','i','u','l','l','a','h'};//not gurrented
    // char a[10]="Waliullah"; //gurrented
    int sz=sizeof(a)/sizeof(char);
    printf("%d\n",sz);
    printf("%s",a);

    return 0;
}