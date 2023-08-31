//写一个代码打印1-100之间所有3的倍数的数字
#include <stdio.h>

int main() {
    printf("3的倍数：\n");
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
