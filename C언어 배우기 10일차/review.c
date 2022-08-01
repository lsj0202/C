#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// '반환괎데이터 타입'  '함수명' ('매개변수1 데이터 타입' '매개변수 1 변수명')
//  void 반환값 없음   
//void * 주소값 반환, 해당 주소에 저장된 데이터 타입은 미정.
//int * 주소값 반환, 해당주소에 저장된 데이터는 int 타입. 
//char * 주소값 반환, 해당주소에 저장된 데이터는 char 타입.
 
 void fn1(int n); //값을 복사하여 가지고 옴. 
  				  //pass by value
 void fn1(int *n);//주소값을 복사하여 가지고 옴. 
 				  //pass by reference
int main(int argc, char* argv) {
	int n =5;                         //4 byte
	int *np;//포인터 선언             //8 byte, np+0; np+1 4byte 씩 증가   
	
	char c='a'; //1 byte
	char *cp;    //8 byte, cp+0; cp+1, ...1byte 씩 증가  
	
    np =&n;
	printf("%d, 0x%X\n",n,&n); //5 , addr
	printf("0x%X, %d\n",np,*np); //addr, 5
	printf("///////////////////////////////////////////////////////////////////////////\n");
	int m[5]={1,2,3,4,5};
	int i;
	
	for(i=0; i<5; i++){
		//printf("0x%X",&m[i]);
		printf("0x%X",m+i);
		printf("\n");
	}
	char *s1 ="mysrting";//code section
	char buf[20];        //stack
	char *buf2 =NULL;    //heap   
	int x;
	
	strcpy(buf,s1);
	buf2 = (char*)malloc(sizeof(char)*20); //20.  //malloc 
	strcpy(buf2,s1);
	free(buf2); //free                   형태 외우기 * 
	
	printf("code\t\t\tstack\t\t\theap\n");
	x= strlen(s1);
	for(i=0; i<x; i++)
		printf("0x%x\t\t0x%x\t\t0x%x\t\t %c\n",
				s1+i, buf+i ,buf2+i ,*(s1+i));
	
	
	
	return 0;
}
