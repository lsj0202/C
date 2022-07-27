#include<stdio.h>
int main() {
	int a, b, gop = 0;
	scanf_s("%d %d", &a, &b);
	if (a % b == 0) {
		gop = a / b;
		printf("%d*%d=%d", b, gop, a);
	}
	else if (b % a == 0) {
		gop = b / a;
		printf("%d*%d=%d", a, gop, b);
	}
	else {
		printf("none");
	}

	return 0;
}