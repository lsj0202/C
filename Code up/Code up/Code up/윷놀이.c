#include<stdio.h>
int main() {
	int a, b, c, d;
	scanf_s("%d %d %d %d",&a,&b,&c,&d);
	int sum = a + b + c + d;
	if (sum == 1)printf("��");
	else if (sum == 2)printf("��");
	else if (sum == 3)printf("��");
	else if (sum == 4)printf("��");
	else printf("��");
	return 0;
}