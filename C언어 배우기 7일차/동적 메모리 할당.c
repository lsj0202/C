#include <stdio.h>
#include<stdlib.h>

int main(int argc, char** argv) {
	//int n[5]=p{10,20,30,40,50};
	char buf[30];
	int i;
	
	int *m=NULL;
	//m=malloc(20);
	m = (int*)malloc(sizeof(int)*5);
	for(i=0; i<5; i++){
		m[i]=100+i;
	}
	for(i=0; i<5; i++){
		printf("%d,",m[i]);
	}
	printf("\n");
	free(m);
	//malloc �� free ��Ʈ��.
	
	char *mc =NULL;
	
	//char Ÿ�� 30�� �� ����Ʈ ������ŭ �����Ҵ�. 
	mc = (char*)malloc(sizeof(char)*30);
	
	free(mc);
	
	
	return 0;
}
