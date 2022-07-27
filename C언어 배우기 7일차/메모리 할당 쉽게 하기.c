#include <stdio.h>
#include<stdlib.h>
#include<stdlib.h>
char* get_char_heap(int n){
	char *r=NULL;
	int i;
	r=(char*)malloc(sizeof(char)*n);
	if(r==NULL) 
		return r;
	
	for(i=0; i<n; i++){
		r[i]=0;
	}
	return r;
}
concat_str(char *s1,char *s2){
	int len_s1, len_s2, total_len;
	char *r=NULL;
	
	len_s1 =strlen(s1);
	len_s2 =strlen(s2);
	total_len = len_s1 +len_s2;
	
	r = (char*)malloc(sizeof(char)*(total_len+1));
	strncpy(r,s1,len_s1);
	strncpy(r+len_s1,s2,len_s2);
	r[total_len]='\0';
	
	return r; //의문점 return을 왜 쓰는가  
}

int main(int argc, char** argv[]) {
	char *m;
	
	m = get_char_heap(100);	//함수로 할당된 메모리 이름 
	free(m); 
	
	m=concat_str("abc","def"); 
	printf("%s\n",m); //abcdef
	free(m);
	
	return 0;
}
