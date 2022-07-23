#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main() {
	int start, end, tmp_rand; //1초에 한번 랜덤이 되기때문에 1초를 지연시켜야함.
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