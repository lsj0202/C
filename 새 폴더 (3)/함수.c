#include<stdio.h> //visual studio �� �ȵǴ°��� ���Ƽ� dev�� �ű�. 

//void fn1(); //�Լ� ����                
void fn1(int n){ //�Լ� ����    //pass by value
	printf("fn1-%d\n",n);  //fn1�� �Լ�   //void�� rerturn�� ���� ����. 
	n=20;
} //��������  
		//������ n�� ������. 
void fn2(int *n){ //pass by reference
	printf("fn2 %d\n",*n);
	*n=200;
}
int main(int argc,char *argv[]){ //��������  
	int n=5;
	
	fn1(n);
	printf("main, after fn1 %d\n",n);
	
	fn2(&n);
	printf("main, after fn2 %d\n",n);
	return 0;
}

