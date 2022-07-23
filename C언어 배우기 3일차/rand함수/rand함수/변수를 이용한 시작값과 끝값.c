#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main() {
	int i, start, end;
	start = 100;
	end = 105;
	srand((unsigned)time(NULL));

	for (i = 1; i <= 10; i++) {
		printf("rand() %%2: %d\t", rand() % (end-start+1)+start);

	}
	printf("\n");

	return 0;
}