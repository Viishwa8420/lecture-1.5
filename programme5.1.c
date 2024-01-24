#include<stdio.h>

main()
{
	float f, c;
	
	printf("Enter value of degree celsius : ");
	scanf("%f",&c);
	
	f = ( c * 9/5 ) + 32;
	
	printf("The converted value of celsius into fahrenheit : %.1f",f);
}
