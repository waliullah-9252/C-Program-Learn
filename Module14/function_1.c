#include<stdio.h>

// return_type name(parameters)
// {
//     code
//     return what?
// }

//function
int sum(int x,int y)
{
    //code
    int sum=x+y;
    return sum;
}
int main()
{
    printf("%d\n",sum(10,20));
    printf("%d\n",sum(100,200));
    printf("%d\n",sum(1000,2000));
    printf("%d\n",sum(1005,2009));
    return 0;
}