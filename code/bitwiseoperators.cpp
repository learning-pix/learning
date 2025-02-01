# include <stdio.h>

int main ()
{
    int a = 5;
    int b = 3;
    int c = 0;
    int i = 3;

    c = a & b;
    printf("AND operator result is %d\n", c);

    c = a | b;
    printf("OR operator result is %d\n", c);

    c = a ^ b;
    printf("XOR operator result is %d\n", c);

    c =~a;
    printf("NOT operator result is %d\n", c);

    i = i << 1;
    printf("Left shift operator result is %d\n", i);

    i = 3;
    i = i >> 1;
    printf("Right shift operator result is %d\n", i);


    return 0;
}