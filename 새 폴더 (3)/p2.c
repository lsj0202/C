#include<stdio.h>
#include<string.h>

#define READ_SIZE 1024

int main() {
	char buffer[READ_SIZE];
	FILE* f = NULL;
	int i = 0;
	char c;

	f = fopen("Google.html", "r");
	for (i = 0; i < READ_SIZE; i++) {
		c = fgetc(f);
		buffer[i++] = c;
		//printf("%c".c);
	}
	fclose(f);

	for (i = 0; i < READ_SIZE; i++) {
		printf("%c", buffer[i]);
	}
	printf("========================================\n\n\n");
		char *ret;
		for(i=0; i<READ_SIZE;){
			ret =strstr(buffer+i, "function");
			if(ret==NULL){
				printf("NOT FOUND");
				break;
				}
		else{
			i= ret -buffer+1;
			printf("%d\n", ret-buffer);
		}
	}

	return 0;
}
