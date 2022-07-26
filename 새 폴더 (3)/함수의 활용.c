#include<stdio.h>

void double_value(int *list, int len){
	int i;
	for(i=0; i<len; i++){
		*(list+i) *=3;
	}
}
void do_str(char *s){
	printf("do_str: %s\n",s);
	//1.첫번째 element 대문자화
	//*(s+0) -=32;
	s[0] -=32;
	//2.문자열에서 str검색, 시작주소 받기
	char *ret =NULL;
	ret =strstr(s, "str");  
	//3. 2번에서 얻은 시작주소값 부터 시작, 한칸씩 뒤로 복사  
	int i;
	char c;
	for(i=0; i++;){
		c= *(ret+i)
	}
	//4. 3번에서 만든 공간의 값을 '_' 로 지정. 
}

int main(int argc, char *argv){
	int n[5]={1,2,3,4,5};
	char*s1="mystring";
	char buf[15];
	int i;
	
	strncpy(buf,s1,15);
	
	do_str(buf);
	printf("%s\n",buf); 
	double_value(n,5);
	
	/*for(i=0; i<5; i++){
		n[i]=n[i]*2;
	}*/
	for(i=0; i<5; i++){
		printf("%d\n",n[i]);
	}
	return 0;
}
