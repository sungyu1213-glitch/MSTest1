#include <stdio.h>

int main()
{
	int x = 0;
	
	for(;;)
	{
		printf(">");
		scanf("%d",&x);
		switch(x)
		{
			case 1: printf(": One\n"); break;
			case 2: printf(": Two\n"); break;
			case 3: printf(": Three\n"); break;
			case 4: printf(": Four\n"); break;
			case 5: printf(": Five\n"); break;
			case 6: printf(": Six\n"); break;
			case 7: printf(": Seven\n"); break;
			case 8: printf(": Eight\n"); break;
			case 9: printf(": Nine\n"); break;
			case 0: printf(": Zero\n"); break;
			default: x = 12; break;
		}
		if(x == 12) break;
	}
	return 0;	
}
