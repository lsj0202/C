#include <iostream>

int main(int argc, char** argv) {
	int n[6]={10,20,30,40,50,0};
	int i,temp,write;
	/*
	write =n[1];  //쓰고 싶은 값  
	
	temp =n[2];  //임시 저장 값  
	n[2]=write;  //쓰기  
	
	write = temp; //쓰고 싶은 값
	temp = n[3];  //임시 저장값  
	n[3]=write;   
	
	for(i=0; i<6; i++){
		printf("%d ", n[i]);
	}
	n[3]=temp;
	
	*/
	write = n[1];
	i=2; 
	while(i<6){
		temp = n[i];
		n[i]=write;
		write =temp;
		i++;
	}
	for(i=0; i<6; i++){
		printf("%d ", n[i]);
	}
	printf("\n");
	return 0;
}
