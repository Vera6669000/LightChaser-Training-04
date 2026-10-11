#include <stdio.h>
int main()
{
    int a,b,c;
    printf("1.加  2.减  3.乘  4.除\n");  // 打印菜单
    printf("请输入你的运算方式:");
    scanf("%d", &a);                    // 读取用户选择的运算编号
    // 校验输入：如果不在 1~4 范围内，提示并退出程序                   
    if (a!=1 && a!=2 && a!=3 && a!=4)
    {
        printf("请输入1~4之间的整数");
        return 1;
    }
    printf("请输入第一个数：");
    scanf("%d", &b);
    printf("请输入第二个数：");
    scanf("%d", &c);
    if (a == 1)     // 加法
    {
        printf("%d + %d = %d\n", b, c, b + c);
    }
    else if (a == 2)// 减法
    {
        printf("%d - %d = %d\n", b, c, b - c);
    }
    else if (a == 3)// 乘法
    {
        printf("%d * %d = %d\n", b, c, b * c);
    }
    else            // 除法
    {
        if (c == 0)   //避免"除以0"错误
        {
            printf("除数不能为 0\n");
            return 1;
        }
        printf("%d / %d = %.2f\n", b, c, (double)b / c);//保证做的是小数除法而不是整数除法
    }                                                   // %.2f 结果保留 2 位小数
    return 0;

}