//дһ�������ӡ1-100֮������3�ı���������
#include <stdio.h>

int main() {
    printf("3�ı�����\n");
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
