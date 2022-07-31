#include<stdio.h>
int main() {
	int i, max = 0, index = 0;
	int arr[5];
	printf("숫자 다섯개를 입력하세요: ");
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
		if (max < arr[i]){
			max = arr[i];
			index = i;
		}
	}
	printf("최대값은 %d\n그때의 인덱스는 %d입니다", max, index + 1);
	return 0;
}