#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main() {
	int start, end, tmp_rand; //1�ʿ� �ѹ� ������ �Ǳ⶧���� 1�ʸ� �������Ѿ���.
	start = 11;
	end = 19;
	while (1) {
		srand((unsigned)time(NULL));
		tmp_rand =(rand()%(end-start+1))+start;
		printf("%d\n", tmp_rand);
		if (tmp_rand == 15) break;
		Sleep(1000);
	}
}