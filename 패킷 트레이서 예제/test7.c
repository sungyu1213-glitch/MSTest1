#include <stdio.h>
#include <conio.h>

int main()
{
	int v1, v2;
	
	printf("value 1 ? "); scanf("%d", &v1);
	printf("value 2 ? "); scanf("%d", &v2);
	
	/*
	for(;;)// while(1)�� ���� ǥ���� 
	{
		char k = getch(); //console �Լ� 
		
		if(k == '+')
		{
			printf("%d %c %d = %d\n", v1, k, v2, v1+v2);	// v1 + v2 = x
		}
		else if(k == '-')
		{
			printf("%d %c %d = %d\n", v1, k, v2, v1-v2);	// v1 - v2 = x
		}
		else if(k == '*')
		{
			printf("%d %c %d = %d\n", v1, k, v2, v1*v2);	// v1 * v2 = x
		}
		else if(k == '/')
		{
			printf("%d %c %d = %f\n", v1, k, v2, (double)v1/(double)v2);	// v1 / v2 = x
		}
		else break; //��Ģ���� �ƴ� �� ������ ���� 
	}*/	
	for(;;)// while(1)�� ���� ǥ���� 
	{
		char k = getch(); //console �Լ� 
		
		switch(k)
		{
			case '+' :
				printf("%d %c %d = %d\n", v1, k, v2, v1+v2); break;	// v1 + v2 = x
				
			case '-' : 
				printf("%d %c %d = %d\n", v1, k, v2, v1-v2); break;	// v1 - v2 = x
			case '*' :
				printf("%d %c %d = %d\n", v1, k, v2, v1*v2); break;	// v1 * v2 = x
			case '/' :
				printf("%d %c %d = %f\n", v1, k, v2, (double)v1/(double)v2); break;	// v1 / v2 = x				
			default: k = 03; break;
		}
		if(k == 3) break;
	}	
	
	
	return 0;
}
