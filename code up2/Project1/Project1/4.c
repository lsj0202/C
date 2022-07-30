#include<stdio.h>

int main() {
    int i, j, k, n, m, num = 0;
    scanf_s("%d %d", &n, &m);

    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            for (k = 1; k < j; k++) {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
        for (i = n - 2; i >= 0; i++) {
            for (j = 0; j < i; j++) {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
    }
    return 0;
}
