# include <time.h>
# include <stdio.h>
# include <stdlib.h>

void menu()//目录
{
    printf ("........................\n");
    printf ("......1.Game Start......\n");
    printf ("......2.Exit Game......\n");
    printf ("........................\n");
    printf ("please input your chioce:\n");
    return;
}

void Play_Start()//主要游戏，生成随机数，判断输入与随机数的大小并作相应表示，相等退出循环
{
    int magic = rand()%100 + 1;
    int guess;
    int counter = 0;
    while (1)
    {
        printf ("please input your guess: \n");
        scanf ("%d", &guess);
        counter++;
        
        
            if (guess > magic)
            {
                printf ("your guess is too big.\n");
            }
            else if (guess <magic)
            {
                printf ("your guess is too short.\n");
            }
            else 
            {
                printf ("wow, your guess is magic ,congratulation!\n");
                printf ("you try %d times\n", counter);
                break;
            }
    }


}

int main ()//input 用来判断是否进行游戏，1是，2否，其余重输入， 2 退出循环。
{
    int input = 0;
    srand ((unsigned int)time(0));
    do 
    {
        menu();
        scanf ("%d", &input);

        switch (input)
        {
            case 1:
            Play_Start();
            break;

            case 2:
            exit (0);
            break;

            default:
                printf ("pleasr input again.\n");

        }
    }
    while(1);//如果为input 那么0也可退出循环

    return 0;

}
/*
2025-02-15 00:13:27
关于vscode 的若干学到的：
1 . 程序，文件名不能用中文，会显示报错“找不到路径”
2 . 如menu 函数只用来形容界面，即向我展示什么叫做“一个函数，只干一件事。”
3 . time srand((unsigned int)time (0)) time (0)即时间在1970/1/1至今的秒数，强制转换成unsigned int 类型成为srand参数。
4 . 及时添加注释。
 */