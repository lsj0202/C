#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main() {
	int i;
	srand((unsigned)time(NULL));//������ ���� ����
	//������ ���� ���� �Ǿ����� ���� ���� ������ �ʹ� ũ��.

	for (i = 1; i <= 10; i++) {
		printf("rand() %%2: %d\t", rand()%6+5);//5���� 10������ �������� ����
	//  printf("rand() %%2: %d\t", rand()%(10-5+1));
		                                       //10:����,  5:���۰� ,+1 �� �ؾ� 0�� �����Ѵ�.
	}
	printf("\n");

	return 0;
}