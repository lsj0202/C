#include<stdio.h>
int main(int argc, char* argv[]) {
	unsigned char c; 
	int n;

	c = 10;
	c = 0xff;
	/*
	* 0000 0001 1
	* 1000 0001  ��/�� ��ȣ ��ȯ
	* 1111 1110  ������ ��Ʈ ����
	* 1111 1111  ���ϱ� 1�� �� ������� -1�̴�.
	* ����� ������ �ٲٴ� ���.      1=> -1 
	*/
	c = 300;
	n = 300;

	printf("n :  0x%X, %d\n", n, n);
	printf("n :  0x%X, %d\n", c, c); //44�� ������ ������ overflow�� �Ͼ���̴�.

	return 0;
}