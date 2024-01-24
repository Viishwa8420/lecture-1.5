#include<stdio.h>

main()
{
	int firstangle, secondangle, thirdangle;
	
	printf("Enter value for 1st angle of a triangle : ");
	scanf("%d",&firstangle);
	
	printf("Enter value for 2nd angle of a triangle : ");
	scanf("%d",&secondangle);
	
	thirdangle = 180 - ( firstangle + secondangle );
	
	printf("The value of 3rd angle of a triangle is : %d ",thirdangle);
}
