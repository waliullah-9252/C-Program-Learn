#include<stdio.h>
void result(int n)
{
    if(n==0)
    {
        return;
    }
    printf("I love Recursion\n");
    result(--n);
}
int main()
{
    int n;
    scanf("%d",&n);
    result(n);
    return 0;
}