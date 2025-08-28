#include<stdio.h>
#include<ctype.h> // islower, isupper, isdigit 함수를 사용하기 위해 포함

//입력된 키를 분류하는 함수
void classify_key(char key)
{
	if(islower(key)){	//islower(key) : <ctype.h> 헤더에 있는 함수로, key 가 소문자이면 참(0이 아닌 값)울 반환하고, 아니면 거짓(0)을 반환 
		printf(">%c : 소문자\n", key);
	}else if(isupper(key)){	//insupper(key) : key가 대문자이면 참을 반환합니다. 
		printf(">%c : 대문자\n", key);
	}else if(isdigit(key)){	// isdigit(key) : key가 숫자(0~9) 이면 참을 반환합니다. 
		printf(">%c : 숫자\n", key);
	}else{
		printf(">%c : 특수문자\n", key);
	}
 } 

int main()
{
	char user_input;
	int i;
	for(i=0; i<4; i++){
		printf("키(문자 한 개)를 입력하세요\n");
		scanf(" %c", &user_input);
		
		//함수 호출
		classify_key(user_input);
	}
	
	return 0;
} 

