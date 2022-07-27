#include<stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	if (n > 0)
		printf("양수");
	else if (n < 0)
		printf("음수");
	else
		printf("0");
	return 0;
}