#include<stdio.h>
int main() {
	int n[3][2] = {//3�� 2���� 2���� �迭.
								{10,20,},
								{100,200},
								{1000,2000}
						}; //2���� �迭�� ��ȯ.
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("[%d][%d]: %d\n",i,j, n[i][j]); 
		}
	}
	return 0;
}