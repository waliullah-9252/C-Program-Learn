#include<stdio.h>
int main()
{
   int x=100;
   int * ptr = &x;
   *ptr=200;


    //dereference
   printf("x er value - %d\n",x);
   printf("x er value - %d\n",*ptr);


//    printf("x er address - %p\n",&x);
//    printf("x er address - %p\n",ptr);
//    printf("ptr er address - %p\n",&ptr);
//    printf("x er address - %d\n",*ptr);
//    printf("ptr er size - %d\n",sizeof(ptr));

    return 0;
}