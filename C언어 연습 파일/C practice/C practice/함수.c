#include<stdio.h>

int hour;
int minute;
int minuteAdd;

int counter() {
	minute += minuteAdd;
	hour += minute / 60;
	minute %= 60;
	hour %= 24;
	return minute;
}
int main() {

	printf("시를 입력하세요 : ");
	scanf_s("%d", &hour);

	printf("분을 입력하세요 : ");
	scanf_s("%d", &minute);

	printf("더할 분을 입력하세요 : ");
	scanf_s("%d", &minuteAdd);
	counter();
	printf("더해진 시간은 %d시 %d분 입니다.\n", hour, minute);

	return 0;
}