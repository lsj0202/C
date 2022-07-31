#include<stdio.h>
int main() {
	int i, j;
	int g[10][10];
	for (i = 1; i <= 9; i++) {
		printf("\n[  %d´Ü   ]\n\n", i);
		for (j = 1; j <= 9; j++) {
			g[i][j] = i * j;
			printf("%d x %d = %d\n",i, j, g[i][j]);
		}
	}
	return 0;
}