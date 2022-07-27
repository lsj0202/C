#include <stdio.h>
 
int main(){
	int year, month;
	scanf_s("%d %d", &year, &month);
	if (month % 10 == 1) {
		printf("31");
	}
	if (month % 10 == 2) {
		if (month % 400 == 0 || ((month % 4 == 0) && (month % 100 != 0)))
			printf("29");
		else
			printf("28");
	}
	if (month % 10 == 3) {
		printf("31");
	}
	if (month % 10 == 4) {
		printf("30");
	}
	if (month % 10 == 5) {
		printf("31");
	}
	if (month % 10 == 6) {
		printf("30");
	}
	if (month % 10 == 7) {
		printf("31");
	}
	if (month % 10 == 8) {
		printf("31");
	}
	if (month % 10 == 9) {
		printf("30");
	}
	if (month % 10 == 10) {
		printf("31");
	}
	if (month % 10 == 11) {
		printf("30");
	}
	if (month % 10 == 12) {
		printf("31");
	}
	return 0;
}