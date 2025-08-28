#include <stdio.h>
#include <conio.h>
int main()
{
	int my_age; // 사용자의 나이를 저장할 변수 
	
	printf("당신의 나이를 입력하세요 : "); //사용자에게 안내 메시지 출력 
	scanf ("%d", &my_age); //키보드로 숫자를 입력받아 my_age 변수에 저장
	
	//my_age 에는 사용자가 입력한 값이 들어 있어요!
	if(my_age >= 20){
		printf("성인이시군요!, 클럽에 입장할 수 있습니다.\n");
	}
	if(my_age < 20){
		printf("미성년자시군요. 나중에 다시 오세요\n");
	}
	printf("프로그램을 종료합니다.");	
}
