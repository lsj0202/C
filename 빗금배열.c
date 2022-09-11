#include<stdio.h>
int arr[201][201]={0};
int main(){
	int i, j, k, n, m, num=1;
	scanf("%d %d",&n, &m);
  
	for(k=0; k<n*m; k++){
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				if(i+j == k){
					arr[j][i] = num++;
					break;
				}
			}
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
