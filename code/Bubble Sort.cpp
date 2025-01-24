# include <stdio.h>

void bubble_sort(int *p, int len)//结构体不能使用带空格的名称变量 如bubble sort
{
     int i, j, temp;
     for(i = 0; i < len - 1; i++)
     {
        for(j = 0; j < len - 1 - i; j++)
        {
            if(p[j] > p[j + 1]) // 冒泡排序 升序 若改为< 则为降序
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }

        }

     }

}


int main()
{
    int i;
    int a[6] = {8, 6 ,5 ,79 ,-66, 23};
    bubble_sort(a, 6);
    
    for (i = 0; i< 6; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}