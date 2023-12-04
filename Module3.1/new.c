#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;
    scanf("%d\n",&a);
    long long int b;
    scanf("%lld\n",&b);
    float c;
    scanf("%fn",&c);
    char d;
    scanf("\n%c\n",&d);
    
    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%0.2f\n",c);
    printf("%c\n",d);
    
    
    return 0;
}