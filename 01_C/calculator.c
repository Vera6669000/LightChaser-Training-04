#include <stdio.h>
int main()
{
    int a,b,c;
    printf("1.加  2.减  3.乘  4.除\n");
    printf("请输入你的运算方式:");
    scanf("%d", &a);
    if (a!=1 && a!=2 && a!=3 && a!=4)
    {
        printf("请输入1~4之间的整数");
        return 1;
    }
    printf("请输入第一个数：");
    scanf("%d", &b);
    printf("请输入第二个数：");
    scanf("%d", &c);
    if (a == 1)
    {
        printf("%d + %d = %d\n", b, c, b + c);
    }
    else if (a == 2)
    {
        printf("%d - %d = %d\n", b, c, b - c);
    }
    else if (a == 3)
    {
        printf("%d * %d = %d\n", b, c, b * c);
    }
    else
    {
        if (c == 0)
        {
            printf("除数不能为 0\n");
            return 1;
        }
        printf("%d / %d = %.2f\n", b, c, (double)b / c);
    }
    return 0;

}