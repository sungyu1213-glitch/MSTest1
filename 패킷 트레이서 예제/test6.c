#include <stdio.h>
int main()
{
	int index = 1, end = 0, val = 0;
	
	printf("�ε��� ���۰��� : ");
	scanf("%d", &index);
	printf("�ε��� ���ᰪ�� : ");
	scanf("%d", &end);
	
	
	printf("�ε���	�հ�\n");
	
	/* while�� ���� 
	while(index < end) 
	{
		val = val+index;
		printf("%-5d	%2d\n", index, val);//%(-)(n)d
		//index++;
		index=index+2;
	}
	*/
	
	for(; index<end; index+=2) //for������ �ٲ�, �ʱⰪ�� �����ص� ������ ��Ȳ�� for(index=index; index<end; index=index+2) ���� ������ 
	{
		val = val+index;
		printf("%-5d	%2d\n", index, val);//%(-)(n)d
	}
	
	return 0;
}
