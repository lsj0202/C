#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main() {
	int i;
	srand((unsigned) time(NULL));//������ ���� ����
	//������ ���� ���� �Ǿ����� ���� ���� ������ �ʹ� ũ��.

	for (i = 1; i <= 10; i++) {
		printf("rand(): %d\n", rand());
	}

	return 0;
}