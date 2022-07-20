#include<stdio.h>
int main(int argc,char*argv[]) {
	int n = 7, m = 3;
	int x =5;  //0이 아니라면 if문은 항상 실행된다.

	if (n < 5) {
		printf("n greater than 5.\n");  //참인것 하나만 출력한고 순서를 중요하게 생각해야한다.
	}else if(n>m){ printf("n greater than m.\n"); }
	else if(n%2==1) {printf("n is odd number\n");}
	else { printf("n not greater than 5.\n"); }

	if (x==5) { //조건식      //if 구문에서는 중괄호가 없으면 한 줄만 포함한다.
				//이것을 고치기 위해서는 괄호를 하여야한다.
		printf("Hello\n");
		printf("World\n");
	}
	else {
		printf("Bye Bye \nWorld\n");
	}
	if (x != 5) {
		printf("Bye Bye \nWorld");
	}


	return 0;
}