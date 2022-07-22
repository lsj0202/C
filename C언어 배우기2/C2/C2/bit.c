#include<stdio.h>
int main(int argc, char* argv[]) {
	unsigned char c; 
	int n;

	c = 10;
	c = 0xff;
	/*
	* 0000 0001 1
	* 1000 0001  음/양 기호 변환
	* 1111 1110  나머지 비트 반점
	* 1111 1111  더하기 1을 한 결과값이 -1이다.
	* 양수를 음수로 바꾸는 방법.      1=> -1 
	*/
	c = 300;
	n = 300;

	printf("n :  0x%X, %d\n", n, n);
	printf("n :  0x%X, %d\n", c, c); //44가 나오는 이유는 overflow가 일어나서이다.

	return 0;
}