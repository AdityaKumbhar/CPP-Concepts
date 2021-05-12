// This program dzAA                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   emonstrate arithematic operations on pointer

#include<stdio.h>

int main()
{

	// Incrementing and Decrementing pointer

	int i = 10;+                                                                                                                                                                                                                                                                                                                                                                                        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwweeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee]e]]]]]]eeeeeeee]]6
		+
	int *ip = NULL;
	ip = &i;

	printf("Contents of integer i : %d\n",i);
	printf("Address of no : %u\n",&i);
	printf("Contents of integer pointer ip pointning to p : %u\n",ip);
	printf("Incrementing integer pointer ip\n");
	ip++;
	printf("After incrementing integer pointer it points to %u\n",ip);
	--ip;
	printf("After decrementing integer pointer it points to %u\n",ip);

	double d = 3.12;
	double *dp = NULL;
	dp = &d;

	printf("\nContents of double d : %f\n",d);
	printf("Address of double d : %u\n",&d);
	printf("Contents of double pointer dp pointning to p : %u\n",dp);
	printf("Incrementing double pointer p\n");
	dp++;
	printf("After incrementing double pointer it points to %u\n",dp);
	--dp;
	printf("After decrementing double pointer it points to %u\n\n",dp);

	int arr[]={10,20,30,40};
	int *parr1 = arr;
	int *parr2 = arr;

	int no;
	no = 0;
	for ( no = 0;no<4;no++ )
	{
		printf("Address of var[%d] = %u\n", no, parr1 );
		printf("Value of var[%d] = %d\n", no, *parr1);

		parr1++;
	}

	// Comparision between the pointer is valid if both the pointers are pointing to the
	// related data type
	printf("\nComparision between pointers\n");

	// Operator !=
	if(parr1 != parr2)
	{
		printf("Pointers pointing to an array are not equal\n");
	}

	// Operator ==
	if(parr1 == parr2)
	{
		printf("Pointers pointing to an array are not equal\n");
	}

	// Operator <
	if(parr1 < parr2)
	{
		printf("First pointer is less than second pointer\n");
	}

	// Operator >
	if(parr1 > parr2)
	{
		printf("First pointer is greater than second pointer\n");
	}

	// We can not add two pointers
	//	parr1 + parr2			// Error

	// We can substract two pointers if they are pointed to related data types
	printf("Diffrence between two pointer is %d elemets\n",parr1 - parr2);

	// We can not use multiplication and devision operator on pointers
	// parr1 * 2;			// Error
	// parr1 / 2;				// Error

	// We can add integral constant with pointer
	printf("Before addition value of pointer is %u\n",parr2);
	printf("After adding 2 with pointer value is %u\n",parr2 + 2);

	// We can substract integral constant with pointer
	printf("Before substraction value of pointer is %u\n",parr2);
	printf("After substracting 2 with pointer value is %u\n",parr2 - 2);

	return 0;
}