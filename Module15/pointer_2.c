#include<stdio.h>
int main()
{
   double x=5.43;
   double * ptr = &x;
   *ptr=12.23;

   printf("x er value - %.2lf\n",x);
   printf("x er value - %.2lf\n",*ptr);
   printf("ptr er size - %d\n",sizeof(ptr));
   printf("x er size - %d\n",sizeof(x));

    return 0;
}