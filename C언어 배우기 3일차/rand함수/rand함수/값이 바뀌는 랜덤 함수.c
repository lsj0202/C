#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main() {
	int i;
	srand((unsigned) time(NULL));//무작위 수가 나옴
	//무작위 수가 생성 되었지만 랜덥 값의 범위가 너무 크다.

	for (i = 1; i <= 10; i++) {
		printf("rand(): %d\n", rand());
	}

	return 0;
}