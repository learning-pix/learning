#include <stdio.h>

int main() {
    int A[] = {4, 6, 7, 8, 9, 1, 0};
    int n = sizeof(A) / sizeof(A[0]); // 获取数组长度

    // 插入排序
    for (int j = 1; j < n; j++) {
        int key = A[j];
        int i = j - 1;

        // 将key插入到已排序部分的正确位置
        while (i >= 0 && A[i] > key) {
            A[i + 1] = A[i]; // 向右移动元素
            i = i - 1;
        }
        A[i + 1] = key; // 插入key
    }

    // 打印排序后的数组
    printf("排序后的数组: \n");
    for (int l = 0; l < n; l++) {
        printf("%d\n", A[l]);
    }

    return 0;
}