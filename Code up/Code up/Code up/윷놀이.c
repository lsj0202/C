#include<stdio.h>
int main() {
	int a, b, c, d;
	scanf_s("%d %d %d %d",&a,&b,&c,&d);
	int sum = a + b + c + d;
	if (sum == 1)printf("µµ");
	else if (sum == 2)printf("°³");
	else if (sum == 3)printf("°É");
	else if (sum == 4)printf("À·");
	else printf("¸ð");
	return 0;
}