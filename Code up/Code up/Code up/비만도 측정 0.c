#include<stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	if (n <= 10) {
		printf("����");
	}
	else if (n > 10 && n <= 20) {
		printf("��ü��");
	}
	else {
		printf("��");
	}
	return 0;
}
