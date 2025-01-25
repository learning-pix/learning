#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[100];
    float score;
    char sex;
    int age;
};

void sort(struct student *p, int len)
{
    int i, j;
    struct student t;
    for (i = 0; i < len - 1; ++i)
    {
        for (j = 0; j < len - 1 - i; ++j)
        {
            if (p[j].score > p[j + 1].score)
            {
                t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
            }
        }
    }
}

void input(struct student *p, int len)
{
    int i;

    for (i = 0; i < len; ++i)
    {
        printf("请输入第%d个学生的信息:\n", i + 1);
        printf("age = ");
        scanf("%d", &p[i].age);
        getchar(); // 清除缓冲区 否则会输出age的残余值 即 \n会被sex错误读取 也可以用fgets 和 sscanf

        printf("sex = ");
        scanf("%c", &p[i].sex);

        printf("score = ");
        scanf("%f", &p[i].score);

        printf("name = ");
        scanf("%s", p[i].name);
    }
}

void output(struct student *p, int len)
{
    int i;
    for (i = 0; i < len; ++i)
    {
        printf("第%d个学生的信息是:\n", i + 1);
        printf("score = %f\n", p[i].score);
        printf("sex = %c\n", p[i].sex);
        printf("age = %d\n", p[i].age);
        printf("name = %s\n", p[i].name);

        printf("\n");
    }
}
    int main()
    {
        int len;
        struct student *p;

        printf("请输入学生的个数:\n");
        printf("len = ");
        scanf("%d", &len);

        p = (struct student *)malloc(len * sizeof(struct student));

        input(p, len);
        sort(p, len);
        output(p, len);

        free(p);
        return 0;
    }