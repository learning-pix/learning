# include <time.h>
# include <stdio.h>
# include <stdlib.h>

void menu()
{
    printf ("........................\n");
    printf ("......1.Game Start......\n");
    printf ("......2.Exit Game......\n");
    printf ("........................\n");
    printf ("please input your chioce:\n");
    return;
}

void Play_Start()
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

int main ()
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
    while(input);

    return 0;

}