#include<stdio.h>
void main()
{
	// &&, ||, ! --> combine more than 1 condition --> 0 0r 1
	// && --> all condition must pass to get value 1 else 0
				// 1st condition 0 then wont check other condition
	// || --> atleast 1 must pass to get value 1 else 0
				// 1st condition 1 then wont check other condition
	// ! --> if we have any value >0 --> result=0, if value 0 --> result=1
	int age = 45, result;
	result = age>=18 && age<=60;
	printf("&&-> %d\n",result);

	age = 10;
	result = age>=18 && age<=60;
	printf("&&-> %d\n",result);
	
	result = age>=18 && age<=60;//age>=18 || age<=60;
	printf("&&-> %d\n",result);
	
	age = 70;
	result = age>=18 && age<=60;//age>=18 || age<=60;
	printf("&&-> %d\n",result);
}
