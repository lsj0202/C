#include<stdio.h>
#include<stdlib.h>

int main() {
	int i;
	for (i = 1; i <= 10; i++) {
		printf("rand(): %d\n", rand());//같은 랜덤의 집합.
	}
	return 0;
}