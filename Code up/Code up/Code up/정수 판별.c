#include<stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	if (n > 0)
		printf("���");
	else if (n < 0)
		printf("����");
	else
		printf("0");
	return 0;
}