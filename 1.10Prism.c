/*
 area of a rectangular prism
 */
 
#include<stdio.h>
main()
{
	
	int w=20,h=25,l=30,area;
	
	area = 2*((w*l)+(h*l)+(h*w));
	
	printf("\n\n\t width =%d",w);
	printf("\n\n\t length =%d",l);
	printf("\n\n\t height =%d",h);
	
	printf("\n\n\t area = %d",area);
}
