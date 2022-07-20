#include<stdio.h>
int main(int argc, char *argv[]) {
	/*int n;
	scanf_s("%d", &n);
	switch (n % 7 == 0) {
	case 1: 
		printf("7의 배수 입니다.");
		break;
	default:
		printf("7의 배수가 아닙니다.");
		break;
	}*/
	for (int i = 1; i <= 3; i++) {
		int n;
		printf("Your Number: ");
		scanf_s("%d", &n);

		switch (n % 7) {  //(==0굳이 을 쓸 필요가 없다?) 써도 되긴함.
		case  0:
			printf("multiples of 7.\n");
			break;
		default:
			printf("NOT. \n");
			break;
		}
	}
	return 0;
}