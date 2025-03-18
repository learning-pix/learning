# include <stdio.h>

int main (){
    int A[] = {1, 3, 5, 7, 55, 39,16, 24, 32, 52,34 ,7};
    int num = sizeof(A)/sizeof(A[0]);
    int key, j,i;

    for (j = 1; j < num; j++){
        key = A[j];
        i = j - 1;
        while (i >= 0 && A[i] > key){
            A[i + 1] = A[i];
            i--;

        }
        A[i + 1] = key;
    }

    for(j = 0; j < num; j++){
        printf("%d\n", A[j] );
    }

    return 0;
}
//有问题8--21行