#include <stdio.h>
int main()
{
	int index = 1, end = 0, val = 0;
	
	printf("인덱스 시작값은 : ");
	scanf("%d", &index);
	printf("인덱스 종료값은 : ");
	scanf("%d", &end);
	
	
	printf("인덱스	합격\n");
	
	/* while문 예제 
	while(index < end) 
	{
		val = val+index;
		printf("%-5d	%2d\n", index, val);//%(-)(n)d
		//index++;
		index=index+2;
	}
	*/
	
	for(; index<end; index+=2) //for문으로 바꿈, 초기값은 생략해도 괜찮은 상황임 for(index=index; index<end; index=index+2) 같은 내용임 
	{
		val = val+index;
		printf("%-5d	%2d\n", index, val);//%(-)(n)d
	}
	
	return 0;
}
