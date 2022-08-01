//struct data lignment, 정렬. 
#include <stdio.h>             

struct struct_one{
	int x,y; //4+4 =8
	char a,b; //1+1=2      //total 10byte
};
struct struct_two{
	char a; //1
	int x,y; //4+4 =8
	char b; //1            //total 10byte
};

//union
typedef union union_one{
	int x,y;
}UNION_ONE;

struct color_rgb{
	char alpha,b, g, r;
};
union color{           //union의 예시 
	int code; //4byte
	struct color_rgb comp; //4byte
};

int main(int argc, char* argv[]) {
	
	printf("struct_one: %d\n",sizeof(struct struct_one));                 
	printf("struct_one: %d\n",sizeof(struct struct_two));
	
	union union_one myunion;
	UNION_ONE myunion2;
	
	myunion.x=100;
	printf("x: %d\n", myunion.x); //UNION: 합 x와 y가 같이 겹친다. x=100 이라면 y=100 
	printf("y: %d\n", myunion.y); //
	myunion.y=200;
	printf("y: %d\n", myunion.y); //UNION: 합 x와 y가 같이 겹친다. y=200 이라면 x=200
	printf("x: %d\n", myunion.x);
	
	union color mycolor;
	
	mycolor.code=0;
	mycolor.comp.r =255;
	mycolor.comp.g =0;
	mycolor.comp.b =0;
	
	printf("0x%X\n",mycolor.code);
	/*
	192.168.0.1 =8bit *4 = 32bit
	*/
	
	return 0;
}
