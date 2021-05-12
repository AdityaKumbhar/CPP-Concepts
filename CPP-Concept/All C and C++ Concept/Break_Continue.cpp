#include<stdio.h>

int main()
{
	int i = 0;
	// We can use break in loops and swict case
	// break keyword break the execution of loop
	for(i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		printf("%d",i);	
	}

	// We can use continue in loop only
	// continue keyword break the execution of current iteration and control 
	// transferred to next iteration without executing instructions after break keyword
	for(i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			continue;
		}
		printf("%d",i);	
	}

	return 0;
}