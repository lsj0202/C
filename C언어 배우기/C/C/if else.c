#include<stdio.h>
int main(int argc,char*argv[]) {
	int n = 7, m = 3;
	int x =5;  //0�� �ƴ϶�� if���� �׻� ����ȴ�.

	if (n < 5) {
		printf("n greater than 5.\n");  //���ΰ� �ϳ��� ����Ѱ� ������ �߿��ϰ� �����ؾ��Ѵ�.
	}else if(n>m){ printf("n greater than m.\n"); }
	else if(n%2==1) {printf("n is odd number\n");}
	else { printf("n not greater than 5.\n"); }

	if (x==5) { //���ǽ�      //if ���������� �߰�ȣ�� ������ �� �ٸ� �����Ѵ�.
				//�̰��� ��ġ�� ���ؼ��� ��ȣ�� �Ͽ����Ѵ�.
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