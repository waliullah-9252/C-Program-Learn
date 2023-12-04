#include<stdio.h>
int fun(char a[],int i)
{
    if(a[i]=='\0') return 0;
    int extra=fun(a,i+1);
    return extra+1;
}
int main()
{
    char a[10]="Waliullah";
    int length=fun(a,0);
    printf("%d",length);
    return 0;
}