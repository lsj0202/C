#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// '��ȯ�������� Ÿ��'  '�Լ���' ('�Ű�����1 ������ Ÿ��' '�Ű����� 1 ������')
//  void ��ȯ�� ����   
//void * �ּҰ� ��ȯ, �ش� �ּҿ� ����� ������ Ÿ���� ����.
//int * �ּҰ� ��ȯ, �ش��ּҿ� ����� �����ʹ� int Ÿ��. 
//char * �ּҰ� ��ȯ, �ش��ּҿ� ����� �����ʹ� char Ÿ��.
 
 void fn1(int n); //���� �����Ͽ� ������ ��. 
  				  //pass by value
 void fn1(int *n);//�ּҰ��� �����Ͽ� ������ ��. 
 				  //pass by reference
int main(int argc, char* argv) {
	int n =5;                         //4 byte
	int *np;//������ ����             //8 byte, np+0; np+1 4byte �� ����   
	
	char c='a'; //1 byte
	char *cp;    //8 byte, cp+0; cp+1, ...1byte �� ����  
	
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
	free(buf2); //free                   ���� �ܿ�� * 
	
	printf("code\t\t\tstack\t\t\theap\n");
	x= strlen(s1);
	for(i=0; i<x; i++)
		printf("0x%x\t\t0x%x\t\t0x%x\t\t %c\n",
				s1+i, buf+i ,buf2+i ,*(s1+i));
	
	
	
	return 0;
}
