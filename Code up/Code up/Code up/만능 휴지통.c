#include<stdio.h>
int main() {
    int n, ten, one;
    scanf_s("%01d%01d", &ten, &one);
    n = (10 * one + ten) * 2;
    if (n > 100) {
        n = n - 100;
    }
    printf("%d\n", n);
    if (n <= 50) {
        printf("GOOD");
    }
    else {
        printf("OH MY GOD");
    }
    return 0;
}
