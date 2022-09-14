#include <stdio.h>

int n,i,sum =0,count=0; //가격의 총합(계산할 가격)sum, 산 물건의 개수 count 

int menu() //menu 함수  
{
	printf("입력하세요 : ");
	scanf("%d",&n);
	if(n==0) return 0; //숫자 0 이 출력된다면 프로그램이 종료  
	else if(n==1)
	{
		printf("감귤주스 선택\n\n");
		sum +=1000;
		count ++;
		menu();  //menu 함수의 매뉴인 숫자를 눌렀을때 합계와 갯수를 저장한뒤 다시 menu 함수를 돌릴 수 있게 해주기위해 재귀함수 사용  
	} 
	else if(n==2)
	{
		printf("한라봉 주스 선택\n\n");
		sum +=1000; 
		count ++;
		menu();
	}
	else if(n==3)
	{
		printf("오렌지 주스 선택\n\n");
		sum +=1000;
		count ++;
		menu();
	}
	else if(n==4)
	{
		printf("만두 선택\n\n");
		sum +=3000;
		count ++;
		menu();
	}
	else if(n==5)
	{
		printf("월드콘 선택\n\n");
		sum +=1500;
		count ++;
		menu();
	}
	else if(n==6)
	{
		printf("빵또아 선택\n\n");
		sum +=1500;
		count ++;
		menu();
	}
	else if(n==7)
	{
		printf("슈크림빵 선택\n\n");
		sum +=5200;
		count ++;
		menu();
	}
	else if(n==8)
	{
		printf("포켓몬빵 선택\n\n");
		sum +=1550;
		count ++;
		menu();
	}
	else if(n==9)
	{
		printf("과자 선택\n\n");
		sum +=1550;
		count ++;
		menu();
	}
	else if(n==10)
	{
		printf("차카니 선택\n\n");
		sum +=550;
		count ++;
		menu();
	}
	else
	{
		printf("매점에 없는 상품입니다.\n\n"); //10번 이외의 상품은 "매점에 없는 상품입니다." 라는 문장이 뜬다. 
		menu(); 
	}
}

int main()
{
		printf(" -----------------------\n");          //메뉴판을 main함수에 출력함  
		printf("|       매점 매뉴판     |\n"); 
		printf(" -----------------------\n");
		printf("| 1.감귤 주스  :  1000원|\n"
			   "| 2.한라봉 주스:  1000원|\n" 
			   "| 3.오렌지 주스:  1000원|\n"
			   "| 4.만두       :  3000원|\n"
			   "| 5.월드콘     :  1500원|\n"
			   "| 6.빵또아     :  1500원|\n"
			   "| 7.슈크림빵   :  5200원|\n"
			   "| 8.포켓몬빵   :  1550원|\n"
			   "| 9.과자       :  1550원|\n"
			   "| 10.차카니    :  550원 |\n"
			   " -----------------------\n\n");
			
		printf("구매를 멈추시려면 '0'을 입력해주세요.\n\n"); 
		printf("구매할 매점의 매뉴를 입력하세요.\n\n");
		menu(); //main함수에서 menu를 호출함. 
	printf("\n\n총 가격은 %d 원입니다. (구매 갯수 : %d개)", sum, count); //최종 결과에만 나올 수 있도록 menu 함수를 호출하고 난 후의 문장에 프린트를 함 
	
	
    return 0;
}
