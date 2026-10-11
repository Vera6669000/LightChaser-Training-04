#include <stdio.h>
#include <stdlib.h>    
int main()
{
    int n;
    double sum;
    printf("请输入数组长度: ");
    if (scanf("%d", &n) != 1) 
    {
        printf("请输入正确整数\n");
        return 1;
    }
    if (n <= 0)
    {      
        printf("请输入正整数\n");       
        return 1;
    }
    int *arr = (int*)malloc(n * sizeof(int));   // 申请 n 个 int 的空间
    if (arr == NULL)         //申请失败处理   
    {        
        printf("内存不足\n");
        return 1;
    }
    printf("请依次输入 %d 个整数:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("第 %d 个: ", i + 1);      
        if (scanf("%d", &arr[i]) != 1)
        {         
            printf("请输入正确整数\n", i + 1);          
            free(arr);      //提前退出释放
            arr = NULL;     //置空     
            return 1;
        }
        sum += arr[i];
    }
    printf("平均值 = %.2f\n", sum / n);
    free(arr);      //释放
    arr = NULL;     //置空
    return 0;
}