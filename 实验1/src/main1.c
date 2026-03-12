#include "stdio.h"
#define pi 3.1415926
int main()
{
	float r,area,vol;
	scanf("%f", &r);
	area = 4 * pi * r * r;
	vol = area*r/3.0;
	printf("area=%.2f,vol=%.2f",area,vol);
		
	return 0;
}