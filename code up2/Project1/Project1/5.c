#include<stdio.h>
int main() {
	int a[51];
	int n, i, sum = 0, sums = 0;
	
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		sum += i;
	}
	for (i = 1; i < n; i++) {
		scanf_s("%d", &a[i]);
		sums += a[i];
	}
	printf("%d", sum - sums);
	return 0;
}