/*阶乘的for循环实现代码*/

#include <stdio.h>

int main(void)
{
    int val;
    int i, mult = 1;

    printf("请输入一个数字：");
    printf("val = ");
    scanf("%d",&val);

    for (i=1; i<=val; ++i)
    {
        mult = mult * i;
    }

    printf("%d 的阶乘是：%d\n", val, mult);

    return 0;
}
