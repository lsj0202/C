#include<stdio.h> //visual studio 가 안되는것이 많아서 dev로 옮김. 

//void fn1(); //함수 선언                
void fn1(int n){ //함수 정의    //pass by value
	printf("fn1-%d\n",n);  //fn1의 함수   //void는 rerturn의 값이 없다. 
	n=20;
} //지역변수  
		//포인터 n을 선언함. 
void fn2(int *n){ //pass by reference
	printf("fn2 %d\n",*n);
	*n=200;
}
int main(int argc,char *argv[]){ //전역변수  
	int n=5;
	
	fn1(n);
	printf("main, after fn1 %d\n",n);
	
	fn2(&n);
	printf("main, after fn2 %d\n",n);
	return 0;
}

