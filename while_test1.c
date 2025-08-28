#include <stdio.h>

int main()
{
	int i = 0;
	/*
	while(i<10)
	{
		printf("Hello World!\n");
		i++;
	}
	*/
	int sum = 0;
	while(i<=5)
	{
		sum += i; //sum = sum + i;
		i++; 
	}
	printf("1부터 5까지의 합 : %d\n",sum);
	return 0;s
	
}
