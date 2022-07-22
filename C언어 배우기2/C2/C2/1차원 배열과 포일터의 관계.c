#include<stdio.h>
int main(int argc, char *argv[]) {
	int n; //변수 n
	int *p; //*에스터 리스크를 통해서 주소값을 관리 할 수 있는 변수가 됨.
	int x[5] = { 10,20,30,40,50 };

	//에스터 리스크는 변수 바로 옆에 붙이는것이 가장 효율적이다.
	printf("int :%d\n", sizeof(n));  //4byte //32bit
	printf("int *:%d\n", sizeof(p));   // 8byte  //64bit <==computer
	p = &n;
	n = 5; 
	
	printf("%d, %d,0x%X\n", n, &n, &n);
	printf("0x%X, %d, %d\n", p, *p);//(&)앰퍼센드를 통해서 주소값을 알 수 있게됨.

	n = 15;
	printf("%d\n", *p);

	*p = 200;
	printf("%d\n", n);  //200 이 나오는 이유는 포인터였던 p=&n이라는 식 때문이다. 
	//그리고 포인터인 p가 에스터 리스크를 붙여서 일반 변수와 같이 사용할 수 있게된다.


	for (int i = 0; i < 5; i++) {
		printf("%d, 0x%X, %d, 0x%X\n", x[i], &(x[i]), *(x+i),x);     //배열의 순환  //알맹이 값 10,20,30,40,50이 나온다. //4btye씩 값이 증가하고 있다.
		// x의 값은 항상 동일하다. // 4byte 씩 늘어나는 이유는 int형이 4byte 이기 때문이다.
	}

	return 0;
}