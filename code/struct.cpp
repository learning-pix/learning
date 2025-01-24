#include <stdio.h>
#include <string.h>
struct Student
{
    char name[20];//名字 结果是一个字符串形式
    float score;
    char grade;
    char sex;
};

int main()
{
    struct Student st1 = {"Tom", 90.5, 'A', 'M'};
    struct Student st2 = {"Sam", 80.5, 'B', 'F'};
    struct Student st3 = {"Jim", 70.5, 'C', 'M'};
    struct Student st4 = {"Jane", 60.5, 'D', 'F'};
    struct Student st5 = {"Joe", 50.5, 'E', 'M'};

    struct Student st[5] = {st1, st2, st3, st4, st5};

    for (int i = 0; i < 5; i++)
    {
        printf("Name: %s\n", st[i].name);
        printf("Score: %f\n", st[i].score);
        printf("Grade: %c\n", st[i].grade);
        printf("Sex: %c\n", st[i].sex);
    }

    struct Student *p = &st1;
     strcpy(p->name, "Sad"); //strcpy 是复制的意思，效果是将sad 复制到用p 指向的数据结构变量st1的name里 
    printf ("change name to %s", p -> name);//p 前不用加&

    return 0;
} 