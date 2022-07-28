#include<stdio.h>
#include<time.h>
       
int main(int argc,char *argv[]){
	
	time_t ts;
	
	ts =time(NULL);
	printf("%d\n",ts);
	
	return 0;
}
	

