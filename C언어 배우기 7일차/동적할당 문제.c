#include <stdio.h>
#include<stdlib.h>

int main(int argc, char** argv[]) {
	int n;
	char *name;
	
	printf("name len: ");
	scanf("%d",&n);
	
	name = (char *)malloc(sizeof(char)*(n+1)); // '\0'자리 확보를 위해서 +1을 해준다. 
	printf("name :");
	scanf("%s", name);
	
	printf("Your name: %s", name);
	free(name);
	
	name =(char*)malloc(sizeof(char)*100);
	free(name);
	
	return 0;
}
