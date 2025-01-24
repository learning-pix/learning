# include <stdio.h>
# include <stdlib.h>

void f(int ** q)
{
    *q = (int *)malloc (sizeof(int));
    **q = 10;

}

int main()
{
     int *p;
     f(&p);

    printf ("%d", *p);
     return 0;

}