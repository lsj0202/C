#include<stdio.h>
#include "point.h"
#include<stdlib.h>

int main(int argc,char *argv[]){
	
	POINT p1, *p2;
	int i;
	
	point_set(&p1, 10, 20);
	point_printx(&p1, NULL);  //POINT: 10, 20
	
	p2 = point_new(10);
	//x, y  -->10, 20 에서부터 5씩 증가하는 point 10개의 값 출력
	for(i=0; i<10; i++){
		 //p2+i;   // POINT *
		//*(p2+i)   //POINT
		point_set(p2+i, 10+i*5, 20+i*5);  
	}
	
	FILE *f =NULL;
	f =fopen("test.txt","w");
	for(i=0; i<10; i++)
		point_printx(p2+i);
	fclose(f);
	
	point_destroy(p2);
	//////////////////////////
	printf("/***********/\n");
	POINT *p3 =NULL;
	POINT temp;
	p3 =point_new(10);
	f = fopen("test.txt","r");
	for(i=0; i<10; i++){
		fscanf("%d,%d",temp.x, temp.y);
		point_set(p3+i,temp.x,temp.y);
	}
	fclose(f);
	//////////////////////////
	for(i=0; i<10; i++){
		point_printx(p3+i, NULL);
	}
	point_destroy(p3);
	return 0;
}
