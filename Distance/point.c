#include <stdio.h>
#include <stdlib.h>
#include "point.h"
#include <math.h>

POINT *point_new(int n){
	POINT * r=NULL;
	r =(POINT*)malloc(sizeof(POINT)*n+1);
	return r;
}
void point_destroy(POINT *p){
	free(p);
}

void point_set(struct point *p,int a,int b){
	p->x=a;
	p->y=b;
}


void point_print(POINT *p){
	printf("POINT(x,y): %d,%d\n", p->x, p->y); //point.c
}

void point_fprintf(POINT *p, FILE *f){
	fpirntf(f,"%d, %d", p->x, p->y);
}

void point_printx(POINT *P, FILE *f){
	if(f==NULL)
		printf("POINT(x,y): %d,%d\n", p->x,p->y);
	else
		fprintf(f,"%d,%d\n", p->x,p->y);
}

double point_distance(POINT *p1,POINT *p2){
	int n,m;
	n = (p1->x - p2->x);
	m = (p1->y - p2->y);
	n=n*n;
	m=m*m;
	return sqrt(n+m);
}

	
	
