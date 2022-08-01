#ifndef __COLOR_H__
#define __COLOR_H__

typedef struct color{
	int r,g,b;
}COLOR;

void color_set_rgb(COLOR *c,int r,int g,int b);
void color_print_cmyk(COLOR *c);

#endif
