#include<stdio.h>
int main(int argc, char *argv[]) {
	int n[10];  //<=== 갯수, count 
	int i;
	int m[5] = { 1,2,3,4,5 };
	int x[] = { 10,20,30,40,50 };//초기값이 있을 경우에만 []안에 숫자를 쓰지 않아도됨.
	/*  
	n[0]    --->index, 0에서 부터 사용.
	n[1]   0~9까지의 숫자가 있다.
	...n[9]
	*/
	for (i = 0; i < 10; i++) { //배열의 순환
		printf("%d\n", n[i]);
	}
	printf("--------------\n");

	for (i = 0; i < 5; i++) {
		printf("%d\n", m[i] * 2);
	}
	for (i = 0; i < 5; i++) {
		m[i] = 15 * i;
	}

	for (i = 0; i < 5; i++) {
		printf("%d\n", m[i]);
	}
	return 0;
}
