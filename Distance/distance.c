#include <stdio.h>
#include <stdlib.h>
#include "point.h"
#include <math.h>
int main(int argc, char** argv) {
	
	int x1,y1,x2,y2;
	POINT temp;
	POINT *p =NULL;
	int i;
	int n,m;
	
	for(i=0; i<2; i++){
		printf("POINT #%d: ",i+1);
		scanf("%d,%d",&temp.x,&temp.y);
		point_set(p+i, temp.x, temp.y);
	}
	for(i=0; i<2; i++){
		point_printx(p+i,NULL);
	}
	
	printf("distance: %f\n", point_distance(p, p+1));
	n = (p[0].x-p[1].x)*(p[0].x-p[1].x);
	m = (p[0].x-p[1].x)*(p[0].x-p[1].x);
	
	printf("distance: %f\n",sqrt(n+m));
	
	point_destroy(p);
	
	return 0;
}
