#include<stdio.h>
int main(int argc, char *argv[]) {
	/*int n;
	scanf_s("%d", &n);
	switch (n % 7 == 0) {
	case 1: 
		printf("7�� ��� �Դϴ�.");
		break;
	default:
		printf("7�� ����� �ƴմϴ�.");
		break;
	}*/
	for (int i = 1; i <= 3; i++) {
		int n;
		printf("Your Number: ");
		scanf_s("%d", &n);

		switch (n % 7) {  //(==0���� �� �� �ʿ䰡 ����?) �ᵵ �Ǳ���.
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