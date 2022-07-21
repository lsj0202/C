#include<stdio.h>
int main(int argc, char *argv[]) {
	char c;//8bit   
	int d;
	c = 5;        //0000 0101
	c = 3;        //0000 0011

	//1 byte = 8bit
	//bit
	c = 1;
	printf("%d\n", c);
	printf("%d\n", c<<6); //shift

	c = 4;
	printf("%d\n", c >> 2);

	c = 1; 
	d = 2; 
	printf("%d\n", c & d);
	printf("%d\n", c | d);



	return 0;
}
