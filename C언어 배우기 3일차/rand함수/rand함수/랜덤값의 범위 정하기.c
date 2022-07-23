#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main() {
	int i;
	srand((unsigned)time(NULL));//무작위 수가 나옴
	//무작위 수가 생성 되었지만 랜덥 값의 범위가 너무 크다.

	for (i = 1; i <= 10; i++) {
		printf("rand() %%2: %d\t", rand()%6+5);//5부터 10까지의 랜덤값의 범위
	//  printf("rand() %%2: %d\t", rand()%(10-5+1));
		                                       //10:끝값,  5:시작값 ,+1 을 해야 0을 배제한다.
	}
	printf("\n");

	return 0;
}