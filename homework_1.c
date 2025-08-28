#include<stdio.h>
#include<ctype.h> // islower, isupper, isdigit �Լ��� ����ϱ� ���� ����

//�Էµ� Ű�� �з��ϴ� �Լ�
void classify_key(char key)
{
	if(islower(key)){	//islower(key) : <ctype.h> ����� �ִ� �Լ���, key �� �ҹ����̸� ��(0�� �ƴ� ��)�� ��ȯ�ϰ�, �ƴϸ� ����(0)�� ��ȯ 
		printf(">%c : �ҹ���\n", key);
	}else if(isupper(key)){	//insupper(key) : key�� �빮���̸� ���� ��ȯ�մϴ�. 
		printf(">%c : �빮��\n", key);
	}else if(isdigit(key)){	// isdigit(key) : key�� ����(0~9) �̸� ���� ��ȯ�մϴ�. 
		printf(">%c : ����\n", key);
	}else{
		printf(">%c : Ư������\n", key);
	}
 } 

int main()
{
	char user_input;
	int i;
	for(i=0; i<4; i++){
		printf("Ű(���� �� ��)�� �Է��ϼ���\n");
		scanf(" %c", &user_input);
		
		//�Լ� ȣ��
		classify_key(user_input);
	}
	
	return 0;
} 

