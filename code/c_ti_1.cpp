// 有1，2，3，4个数字，能组成多上互不相同且无发重复数字的三位数？都是多少？

#include <stdio.h>

int main()
{
    int g, s, b;
    int counter;

    for (b = 1; b < 5; b++)
    {
        for (s = 1; s < 5; s++)
        {
            for (g = 1; g < 5; g++)
            {
                if (b != s && s != g && g != b)
                {
                    printf("%d%d%d\n", b, s, g);
                    counter++;
                }
            }
        }
    }

    printf("一共有%d个组合", counter);

    return 0;
}

/*
2025-02-17 11:10:00
for循环条件是； 不是，
几个for循环嵌套可以做出这几个数的所有排列组合
可以用这种counter来计数
另提，像这样
===========
for()
{
    for()
    {
        for()
        {
        }
    }
}
===========
括号一多看的确实费劲，可以试试
for(){
}
这种格式
*/