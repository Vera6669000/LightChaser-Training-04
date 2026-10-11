#include <stdio.h>
#include <string.h>
struct transcript
{
    char name[15];
    double score;
};
int main()
{
    struct transcript p1;
    printf("请输入你的名字:");
    scanf("%s", p1.name);
    printf("请输入你的分数:");
    scanf("%lf", &p1.score);
    printf("==========成绩单==========\n");
    printf("姓名：%s\n", p1.name);
    printf("分数：%lf\n", p1.score);
    printf("-------------------------\n");
    return 0;
}
