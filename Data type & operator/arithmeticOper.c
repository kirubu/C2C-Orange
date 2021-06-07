#include<stdio.h>
void main()
{
	// +,-,*,/,% - return value based on type of the operation
	int a = 50, b = 10, c;
	float d = 45.25, e = 5.25, g;

	c = a + b;
	printf("%d\n",c);
	
	c = a - b;
	printf("%d\n",c);
	
	c = a * b;
	printf("%d\n",c);
	
	c = a / b;// divide - quotient
	printf("%d\n",c);
	
	c = a % b;// mod - remainder
	printf("%d\n",c);
	
	g = d % e;// float type of mod operation will give compile time error
	printf("%f\n",g);
}
