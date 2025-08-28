#include <stdio.h>
#include <conio.h> //Windos console only

int func1(); //function prototype
int main()
{
	int m = 1; //operation code 
	int k;

	while(m){
		printf("> "); 
		k = func1();

		switch(k)
		{
			case 1: printf("대문자\n"); break;
			case 2: printf("소문자\n"); break;
			case 3: printf("숫자\n"); break;
			case 4: printf("특수문자\n"); break;
			default : m=0;  //func1 0을 반환하면 m=0이 되어 루프 종료 
		}
	}
	printf("프로그램이 종료됩니다.\n");
	return 0;
}

int func1(){
	char c = getch(); //conio.h 의 getch() 함수 사용 
	int k;
	
	printf("%c", c); // 입력된 문자를 화면에 출력!
	
	if((c >= 'A') && (c <= 'Z') ){ //대문자
		k=1; 
	}else if((c >= 'a') && (c <= 'z') ){ //소문자
		k=2; 
	}else if((c >= '0') && (c <= '9') ){ //숫자
		k=3;
	}else if(c==27){ //ESC 키 입력 시 
		k=0; 
	}else{ //특수문자
		k=4;
	}
	return k; 
}




