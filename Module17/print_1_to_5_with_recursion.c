#include<stdio.h>
void fun(int i)
{
    if(i==9) return;
    printf("%d ",i);
    fun(i+1);
}
int main()
{
    fun(1);
    return 0;
}