#include<stdio.h>
int main() {
	int i, max = 0, index = 0;
	int arr[5];
	printf("���� �ټ����� �Է��ϼ���: ");
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
		if (max < arr[i]){
			max = arr[i];
			index = i;
		}
	}
	printf("�ִ밪�� %d\n�׶��� �ε����� %d�Դϴ�", max, index + 1);
	return 0;
}