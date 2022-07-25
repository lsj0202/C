#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[]) {

	char c = 'a';
	char c1[6] = { 'h','e' ,'l' ,'l' ,'o','\0'}; //null 값을 넣음.
	char c2[] = { 'h','e' ,'l' ,'l' ,'o','\0' };
	char c3[] = "hello";
	char *c4 = "HelloWorld"; //머리만 붙잡고있다.(시작값의 주소)
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
//길이 strlen
//복사 strcpy
//비교 strcmp
//검색 
//-strchr 
//-strstr
