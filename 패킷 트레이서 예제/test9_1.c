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
			case 1: printf("�빮��\n"); break;
			case 2: printf("�ҹ���\n"); break;
			case 3: printf("����\n"); break;
			case 4: printf("Ư������\n"); break;
			default : m=0;  //func1 0�� ��ȯ�ϸ� m=0�� �Ǿ� ���� ���� 
		}
	}
	printf("���α׷��� ����˴ϴ�.\n");
	return 0;
}

int func1(){
	char c = getch(); //conio.h �� getch() �Լ� ��� 
	int k;
	
	printf("%c", c); // �Էµ� ���ڸ� ȭ�鿡 ���!
	
	if((c >= 'A') && (c <= 'Z') ){ //�빮��
		k=1; 
	}else if((c >= 'a') && (c <= 'z') ){ //�ҹ���
		k=2; 
	}else if((c >= '0') && (c <= '9') ){ //����
		k=3;
	}else if(c==27){ //ESC Ű �Է� �� 
		k=0; 
	}else{ //Ư������
		k=4;
	}
	return k; 
}




