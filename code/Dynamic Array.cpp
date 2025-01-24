# include <stdio.h>
# include <stdlib.h>

int main()
{
    int len;
    int *Parr;
    int i;

    printf("Enter the length of the array:\n ");
    scanf("%d", &len);
    Parr = (int *)malloc(len * sizeof(int));

    for(i = 0 ; i < len; ++i)
    {
        printf("Enter the value of the array: \n");     
        scanf("%d", &Parr[i]);   
    }
    
    for(i = 0 ; i < len; ++i)
    {
        printf("\nThe value of the array is: ");     
        printf("%d", Parr[i]);   
    }
    free(Parr);
    printf ("\nthe memory is freed\n");

    return 0;
}