#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i += 2) //所有奇数相加
    {
        sum += i;
    }
   printf("1~100的奇数和为:%d\n", sum);
   return 0;
}
