#include <stdio.h> //f11  

#define READ_SIZE 1024

int main(int argc, char** argv) {
	int n,m;
	FILE *f=NULL;
	int i;
	
	n=5;
	
	f = fopen("test.txt","w"); //������ �ʿ��� �޴������ΰ���. (�ѹ���) 
	for(i=0; i<5; i++){
		fprintf(f,"%d\n", i*5);
	}
	fclose(f);
	
	f=fopen("test.txt","r");
	while(!feof(f)){
		i = fgetc(f);
		printf("%c, %d\n",i,i);
	}
	fclose(f);
	/*
	m=100;
	f = fopen("test.txt","r"); 
	while(!feof(f)) { //end of file�� ����. 
		fscanf(f,"%d",&m);
		printf("fscanf READS: %d\n",m);
	}
	fclose(f);
	
	printf("reads:%d\n",m);
	/*
	n=5; 
	
	printf("%d",n);
	scanf("%d",&n);
	return 0;
	*/
	
}
