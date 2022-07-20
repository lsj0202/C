#include<stdio.h>
int main(int argc, char *argv[]) {
	int n =3;
	switch (n){
	case 0:
		printf("zero.\n");
		break;
	case 5:
		printf("five.\n");
		break;
	default:
		printf("don't know.\n");
		break;
	}
	return 0;
}