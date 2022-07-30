#include<stdio.h>
int main() {
	int n, m;
	char side;
	scanf_s("%d %d %c", &n, &m, &side);
	
	if (side == 'R'){
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n - i; j++) {
				printf(" ");
			}
			for (int k = 1; k <= m; k++) {
				printf("*");
			}
			printf("\n");
		}
	}
	else if (side == 'L') {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j < i; j++) {
				printf(" ");
			}
			for (int k = 1; k <= m; k++) {
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}