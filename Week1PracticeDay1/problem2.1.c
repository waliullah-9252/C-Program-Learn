#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int summation,substraction,multiplication,reminder;
    summation = a+b;
    substraction = a-b;
    multiplication = a*b;
    float divided = a*1.0/b;
    reminder = a%b;
    

    printf("%d + %d = %d\n",a,b,summation);
    printf("%d - %d = %d\n",a,b,substraction);
    printf("%d * %d = %d\n",a,b,multiplication);
    printf("%d / %d = %0.2f\n",a,b,divided);
    printf("%d %% %d = %d\n",a,b,reminder);


    return 0;
}