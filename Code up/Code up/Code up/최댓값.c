#include<stdio.h>
int main() {
    int a, b;
    int tmp;
    float max = 0;		
    float ap = 1;		
    float bp = 1;		
    scanf_s("%d %d", &a, &b);

    if (a > b) {    
        tmp = a;
        a = b;
        b = tmp;
    }

    for (int i = 1; i <= b; i++) {
        ap *= a;
    }
    for (int i = 1; i <= a; i++) {
        bp *= b;
    }

    if ((b - a) > max) {
        max = b - a;
    }
    if ((a + b) > max) {
        max = a + b;
    }
    if ((a * b) > max) {
        max = a * b;
    }
    if ((a / b) > max) {
        max = a / b;
    }
    if (ap > max) {
        max = ap;
    }
    if (bp > max) {
        max = bp;
    }

    printf("%.6f", max);		
    return 0;
}