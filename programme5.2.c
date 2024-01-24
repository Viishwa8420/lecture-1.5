#include<stdio.h>

main()
{
	int HRA, DA, TA, BaseSalary, Grosssalary;
	
	printf("Enter value for HRA : ");
	scanf("%d",&HRA);
	
	printf("Enter value for DA : ");
	scanf("%d",&DA);
	
	printf("Enter value for TA : ");
	scanf("%d",&TA);
	
	printf("Enter value for Base Salary : ");
	scanf("%d",&BaseSalary);
	
	Grosssalary = HRA + DA + TA + BaseSalary;
	
	printf("the Gross Salary is : %d ",Grosssalary);
}
