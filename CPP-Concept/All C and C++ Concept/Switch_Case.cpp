#include<stdio.h>

// This program demonstates concept of switch case

int main()
{

	// Use of switch case
	int no = 10;
	if (no == 5)
	{
		printf("Value of no is 5");
	}
	else if (no == 6)
	{
		printf("Value of no is 6");	
	}
	else if (no == 7)
	{
		printf("Value of no is 7");			
	}
	else
	{
			printf("Value of no is not within the range");	
	}

	// Above code can be written with the help of switch case
	// This is the proper situation in which swtch case can be used
	// Swich case evaluates faster as compared to if else if
	switch(no)
	{
		case 5:
			printf("Value of no is 5");
		break;

		case 6:
			printf("Value of no is 6");	
		break;

		case 7:
			printf("Value of no is 7");			
		break;

		default :
				printf("Value of no is not within the range");	
	}

	// In this case we can not use swich case
	// because we can not implement ranges in switch case
	if (no < 10 && no > 20)
	{
		printf("Value of no is in between 10 and 20");
	}
	else if (no < 30 && no > 40)
	{
		printf("Value of no is in between 30 and 40");
	}
	else if (no < 50 && no > 60)
	{
		printf("Value of no is in between 50 and 60");
	}

	// Multiple variations in swich case

	// If perticular case is matched then control is transfered in that case
	// And instructions are evaluated till break

	no = 14;
	switch(no)
	{
		case 10:	printf("Value of no is 10\n");
			break;

		case 11:	printf("Value of no is 11\n");
			break;
		
		case 14:	printf("Value of no is 14\n");
			// After executing this case control is transferred to next case

		case 15:	printf("Value of no is 15\n");
			break;
	}

	// We can not use identical case in switch case
/*
	switch(no)
	{
	case 10:

		break;

	case 11:

		break;

	case 10:			// Error

		break;
	}
*/

	// If there is no appropriate case then control passed to default case
	// But writting default case is not compulsary

	no == 15;
	switch (no)
	{
	case 10:

		break;

	case 11 :

		break;

	default :
		printf("Inside the dafault case\n");
		break;
	}

	// In switch case we can use any integral constant
	// or an expression that can evaluate to an inegral constant
	
	int i = 10,j = 20;
	switch (no)
	{
		case 10:				// Allowed
			break;

		case 10+2*2:		// Allowed
			break;

		case 'A':				// Allowed
			break;

		case 10/3 :			// Allowed
			break;

		//case i+j:			// Not allowed

		case 15:
		//	continue;			// We can not use continue in swich case
			break;
	}


return 0;
}