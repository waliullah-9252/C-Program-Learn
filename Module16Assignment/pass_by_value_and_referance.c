#include<stdio.h>
void sum(int *a)
{
    //dereference
    *a=30;
}
int main()
{
   int x=20;
   sum(&x);

    return 0;
}