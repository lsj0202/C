#ifndef __POINT_H__
#define __POINT_H__

#include<stdio.h>
typedef struct point{
	int x,y;
}POINT;

POINT *point_new(int n);
void point_destroy(struct point *p);
void point_set(struct point *p,int a,int b);
void point_print(POINT *p);
void point_fprintf(POINT *p,FILE *f); //struct 
double point_distance(POINT *p1,POINT *p2);
#endif
