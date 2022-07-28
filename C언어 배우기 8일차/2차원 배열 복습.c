#include<stdio.h>

int main(int argc,char argv[]){
	int n[3][2]={
					{10,20},
					{100,200},
					{150,250},
	};
	int i,j;
	for(i=0; i<3;i++){
		for(j=0; j<2; j++){
			printf("n[%d][%d]: %d, 0x%X\n",i,j,n[i][j], &(n[i][j])); // 2차원 배열  
		}
	}
	printf("JUST N: 0x%X\n",n); //배열의 시작주소가 입력된다. 
	printf("n[0]: 0x%X\n", n[0]);// 2차원 배열인데 배열을 하나만 줘서 시작의 주소값을 반환했다. 
	printf("n[0]: 0x%X ,0x%X\n", n[2], n+2);  
	return 0;
}
