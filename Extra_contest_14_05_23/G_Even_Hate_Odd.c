#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(n%2!=0){
            printf("-1\n");
        }
        else if (even == odd)
        {
            printf("0\n");
        }
        else if (even < odd)
        {
            int a = odd / 2;
            odd++;
            printf("%d\n", a);
        }
    }

    return 0;
}