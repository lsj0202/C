#include<stdio.h>
int main() {
	int a, b;
	int cal = 0;	
	scanf_s("%d %d", &a, &b);

	if (a == 1) cal += 400;
	else if (a == 2) cal += 340;
	else if (a == 3) cal += 170;
	else if (a == 4) cal += 100;
	else cal += 70;

	if (b == 1) cal += 400;
	else if (b == 2) cal += 340;
	else if (b == 3) cal += 170;
	else if (b == 4) cal += 100;
	else cal += 70;

	if (cal > 500) printf("angry"); 
	else printf("no angry");

	return 0;
}
