#include <stdio.h>
#include<stdlib.h>

int main(int argc, char** argv[]) {
	int n_numbers,i,sum;
	int *num = NULL;
	
	printf("how many numbers? ");
	scanf("%d",&n_numbers);
	
	num= (int *)malloc(sizeof(int)*n_numbers);
	for(i=0; i<n_numbers; i++){
		printf("number %d: ",i+1);
		scanf("%d",num+i);
	}
	for(i=0; i<n_numbers; i++){
		sum +=num[i];
	}
	printf("AVG: %d\n",sum/n_numbers);
	
	free(num);
	return 0;
}
