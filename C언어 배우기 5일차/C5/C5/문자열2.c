#include<stdio.h>
#include<string.h>

int main() {
	char* s1 = "Hello";
	char* s2 = "Hello";
	char buffer[10];
	size_t len;

	len = strlen(s1);  //���ڿ��� ���̸� �˷��ش�. 
	printf("len: %d\n", len);

	//strcpy�� �� ���� �ʴ´�. 
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
	x == y     --> 1�� ��ȯ�ϴµ� strcmp�� �ΰ��� ���ڿ��� ������ ��ȣ������ 0�̴�. //�ٸ��� 1�� ��µȴ�.
	*/

	char* s3 = "mylonglongstring"; //0���� ������.(�迭)
	char* ret = NULL;


	ret = strchr(s3, 'l');
	if (ret == NULL) {
		printf("Not Found.\n");
	}
	else {
		printf("%s, %d\n", ret, ret -s3);
	}
	
	ret = strchr(s3+(ret-s3)+12, 'l');
	//ret = strchr(ret+1, 'l'); //�� ����� ���� ������ ����̴�.
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
		printf("%s, index: %d\n", ret, ret-s3);  //gst�� ���۰��� ã�´�.
	}
	/*
	char buf2[5]; // s3�� "gstr" �κи� ����.
	strncpy(buf2, ret, 4);
	buf2[4]='\0';
	printf("%s\n", buf2);    
	*/

	return 0;
}