#include <stdio.h>

int rectangle(int a, int b)
{
	int xy 	= a*b;
	return xy;
}
double triangle(int a, int b)
{
	double xy = ((double)a*(double)b)/2.0;
	return xy;
}

int main()
{
	int x, y ;
	
	printf("(x,y) ? "); scanf("%d %d", &x, &y);
	int r = rectangle(x,y);
	double t = triangle(x,y);
	
	printf("밑 변이 %d 이고 높이가 %d인 4각형의 면적은 %d입니다\n", x, y, r);
	printf("밑 변이 %d 이고 높이가 %d인 3각형의 면적은 %f입니다\n", x, y, t);
	
	return 0;
}

