#include <stdio.h>                      
#include <string.h>                     

//定义一个结构体类型，用来描述"一份成绩单"
struct transcript
{
    char name[15];                      //姓名：字符数组
    double score;                       //分数：可以带小数
};

int main()
{
    struct transcript p1;
    printf("请输入你的名字:");
    // %s 用于读取字符串；数组名p1.name本身就是地址，所以不需要加&
    scanf("%s", p1.name);
    printf("请输入你的分数:");
    // %lf 用于读取 double；p1.score不是数组，必须加&
    scanf("%lf", &p1.score);

    //输出成绩单
    printf("==========成绩单==========\n");
    printf("姓名：%s\n", p1.name);
    printf("分数：%lf\n", p1.score);
    printf("-------------------------\n");

    return 0;                           
}

