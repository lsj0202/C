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

	printf("�ø� �Է��ϼ��� : ");
	scanf_s("%d", &hour);

	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &minute);

	printf("���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &minuteAdd);
	counter();
	printf("������ �ð��� %d�� %d�� �Դϴ�.\n", hour, minute);

	return 0;
}