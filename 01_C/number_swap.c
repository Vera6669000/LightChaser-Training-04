#include <stdio.h>
int main()
{
    int a = 38;
    int b = 77;
    printf("a的值为:%d, b的值为:%d\n", a, b);
    int *p1 = &a;
    int *p2 = &b;
    int c = *p1;  //把a的值暂存
    *p1 = *p2;    //把b的值写到a那块内存
    *p2 = c;      //把暂存的a旧值写到b那块内存
    printf("a的值为:%d, b的值为:%d\n", a, b);
    return 0;
}
