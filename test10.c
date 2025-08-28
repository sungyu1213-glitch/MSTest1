#include <stdio.h>
int main()
{
	int a = 0x1234;
	char *pc; //1
	int *pi; //4
	double *pd; //8
	int* p;
	
	printf("&a : %08x %08x\n", &a, a); //before 
		
	pi = &a;
	pc = pi;
	pd = pi;
	
	printf("&a : %08x %08x\n", &a, a); //afer 
	printf("p : %08x %08x	%08x\n", pi, pc, pd); //before
	printf("p+1: %08x	%08x	%08x\n", ++pi, ++pc, ++pd); //before
	printf("p+1: %08x	%08x	%08x\n", pi+2000, pc+2, pd+2); //before
}
 
