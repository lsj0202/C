#include<stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	if (n % 10 == 1) {
		if (n == 11)printf("%dth", n);
		else printf("%dst", n);
	}
	else if (n % 10 == 2) {
		if (n == 12)printf("%dth", n);
		else printf("%dnd", n);
	}
	else if (n % 10 == 3) {
		if (n == 13)printf("%dth", n);
		else printf("%drd", n);
	}
	else
		printf("%dth", n);
	return 0;
}