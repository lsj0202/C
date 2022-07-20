#include<stdio.h>
int main() {
	int n;
	n = 0;
	while (n < 5) {
		n++;
		printf("%d\n", n);
	}
	n = 0;
	while (1) {
		if (n == 5)break;
		printf("%d\n", n);
		n++;
	}
	return 0;
}