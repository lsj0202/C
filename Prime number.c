#include<stdio.h>
int main(int argc, char* argv) {
	int n, flag;
	for (n = 2; n < 101; n++) {
			flag = 0;
			for (int i = 2; i < n; i++) {
				if (n % i == 0) {
					flag = 1;
					break;
				}
			}
			if (flag == 0)
				printf("%d, ",n);
	}
	return 0;
}
