#include<stdio.h>
#include<stdlib.h>

typedef struct point{ //_가 앞에 붙으면 안쓰는 것이 좋다. 
	int x,y;//멤버 변수  
}POINT; // POINT로 새로 정의 한다는 의미. 

//typedef struct point POINT;//data type define //POINT로 새로 정의 한다는 의미. 
void point_set(struct point *p, int a ,int b){
	//(*p).x = a;
	//(*p).y = b;
	p -> x = a;
	p -> y = b;
}
void printf_point(struct point *p){     
	printf("POINT(x, y): %d, %d\n", p->x, p->y);
}

int main(int argc,char argv[]){
	int n[2]={10,20}; //point x,y 
	
	POINT p1;
	POINT *p2;
	
	point_set(&p1,150,250);
	print_point(&p1);
	
	p2=(POINT*)malloc(sizeof(POINT)*1);
	point_set(p2, 15, 25);
	point_print(p2);
	free(p2);
	
	return 0;
}
