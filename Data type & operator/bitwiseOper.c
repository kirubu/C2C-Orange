#include<stdio.h>
void main()
{
	// &, |, ^, >>, << --> perform bitwise operation
	// convert dec to binary, and perform &, |, ^, >>, <<
	int a = 4, b=8,c;
	c = a&b;
	printf("%d\n",c);
	
	c = a|b;
	printf("%d\n",c);
	
	c = a^b;
	printf("%d\n",c);
	
	c = b>>1;
	printf("%d\n",c);
	
	c = b<<1;
	printf("%d\n",c);
}
