#include<stdio.h>//man rand 참고
#include <stdlib.h>//rand 함수 헤더파일 

int main(int argc, char* argv[]) {

	int n[10];
	int m, i;

	srand(123123);
	m = 0;
	for (i = 1; i <= 10; i++) {
		m = rand()%100;
		printf("%d\n", m);
	}

	return 0;
}