#include<stdio.h>
void fun(int * p)
{
    // printf("p er value - %p\n",p);
    //deference
    *p=500;
}
int main()
{
    int x=10;
    // printf("x er address - %p\n",&x);
    fun(&x);
    printf("main x er value - %d\n",x);
    return 0;
}