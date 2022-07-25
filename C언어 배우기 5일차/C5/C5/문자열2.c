#include<stdio.h>
#include<string.h>

int main() {
	char* s1 = "Hello";
	char* s2 = "Hello";
	char buffer[10];
	size_t len;

	len = strlen(s1);  //문자열의 길이를 알려준다. 
	printf("len: %d\n", len);

	//strcpy는 잘 쓰지 않는다. 
	//strncpy(buffer, s1, 5);
	//printf("%s\n", buffer);

	strcmp(s1, s2);
	int r = strcmp(s1, s2);
	printf("strcmp %d\n", r);
	
	if (s1 == s2)
		printf("same?\n");
	/*
	int x = 5;
	int y = 5;
	x == y     --> 1을 반환하는데 strcmp는 두개의 문자열이 같으면 반호나값은 0이다. //다르면 1이 출력된다.
	*/

	char* s3 = "mylonglongstring"; //0부터 시작임.(배열)
	char* ret = NULL;


	ret = strchr(s3, 'l');
	if (ret == NULL) {
		printf("Not Found.\n");
	}
	else {
		printf("%s, %d\n", ret, ret -s3);
	}
	
	ret = strchr(s3+(ret-s3)+12, 'l');
	//ret = strchr(ret+1, 'l'); //이 방식이 가장 쉬운계산 방법이다.
	if (ret == NULL) {
		printf("Not Found.\n");
	}
	else {
		printf("%s, %d\n", ret, ret - s3);
	}

	ret = strstr(s3, "gst");
	if (ret == NULL) {
		printf("Not Found.\n");
	}
	else {  
		printf("%s, index: %d\n", ret, ret-s3);  //gst의 시작값을 찾는다.
	}
	/*
	char buf2[5]; // s3의 "gstr" 부분만 복사.
	strncpy(buf2, ret, 4);
	buf2[4]='\0';
	printf("%s\n", buf2);    
	*/

	return 0;
}