#include<stdio.h>
int main() {
	int n;
	for (n = 0; n < 5; n++) {//for문도 if 구문과 마찬가지로 한 덩어리만 포함시킨다.
		printf("%d\n", n);
		printf(".....\n");
	}
	return 0;
}