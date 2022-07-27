#include<stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	if (n <= 10) {
		printf("정상");
	}
	else if (n > 10 && n <= 20) {
		printf("과체중");
	}
	else {
		printf("비만");
	}
	return 0;
}
