#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[]) {

	char c = 'a';
	char c1[6] = { 'h','e' ,'l' ,'l' ,'o','\0'}; //null ���� ����.
	char c2[] = { 'h','e' ,'l' ,'l' ,'o','\0' };
	char c3[] = "hello";
	char *c4 = "HelloWorld"; //�Ӹ��� ������ִ�.(���۰��� �ּ�)
	char buf[20];

	strcpy(buf, c4);
	printf("buf: %s\n", buf);

	printf("%d %c\n", c, c);
	for (int i = 0; i < 5; i++) {
		printf("%c", c1[i]);
	}
	printf("\n");

	c1[2] = 'L';
	printf("%s\n", c1);


	buf[5] = 'w';
	printf("%s\n",c4);

	return 0;
}
//���� strlen
//���� strcpy
//�� strcmp
//�˻� 
//-strchr 
//-strstr
