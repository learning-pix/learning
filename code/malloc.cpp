# include <stdio.h>
# include <malloc.h>

int main()
{
	int *p = (int *)malloc(sizeof(int));
	*p = 10;
	printf("%d\n", *p);
	free(p);
	return 0;
}