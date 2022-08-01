#include "color.h"
#include <stdio.h>

void color_set_rgb(COLOR *c,int r,int g,int b){
	c ->r= r;
	c ->g =g;
	c ->b =b;
}
void color_print_cmyk(COLOR *c){
	float rp,gp,bp,temp,max;
	float k,d,m,y;
	
	rp = c->r/255.0;
	gp = c->g/255.0;
    bp = c->b/255.0;
	
	if(rp>gp)
		temp =rp;
	else
		temp =gp;
		
	if(temp >bp)
		max=temp;
	else
		max=bp;
		
	k=1-max;
	d=(1-rp-k)/max;
	m=(1-gp-k)/max;
    y=(1-bp-k)/max;
    
	printf("%f,%f,%f,%f\n", d,m,y,k);
}
