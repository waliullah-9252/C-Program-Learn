#include<stdio.h>
int main()
{
    int a=5,b=2;
    int summation,substraction,multiplication;
    summation = a+b;
    substraction = a-b;
    multiplication = a*b;
    float divided = a*1.0/b;

    printf("%d + %d = %d\n",a,b,summation);
    printf("%d - %d = %d\n",a,b,substraction);
    printf("%d * %d = %d\n",a,b,multiplication);
    printf("%d / %d = %0.2f\n",a,b,divided);



    return 0;
}