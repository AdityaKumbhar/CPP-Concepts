#include<stdio.h>
#include<stdlib.h>

// This program demostate important concepts abouot the Array

int main()
{
	// We can allocate memory for array statically or dynamically

//////////////////////////////////////////////////////////////////////////////
	// Static memry allocation for array of 10 elements
	int arr1[10];

//////////////////////////////////////////////////////////////////////////////

	// Dynamic memry allocation for array of 10 elements
	int *parr1 = (int *)malloc(sizeof(int) * 10);

//////////////////////////////////////////////////////////////////////////////
	// Size of the arraymust be known at compile time
	// We can not use variable as a size.
	// We can provide compile constant while creating array

	int i = 10;
	//int arr[i];		// Error

	const int j = 10;
	int arr2[j];			// This is allowed as it is a constant

	#define MAX 10
	int arr3[MAX];	// This is allowed to provide the preprocessing time constant

	// We can also provide expression for size of an array
	int arr4[MAX + j - 2];

//////////////////////////////////////////////////////////////////////////////

	// If the array is initialised at the time of declaration then there is no need to provide the size
	int arr5[ ] = {10,20,30,40};

//////////////////////////////////////////////////////////////////////////////

	// If array is initialised and size of array is greater than the initialised members then 
	// remainning members are initialised with 0
	int arr6[10] = {10,20,30,40};
	printf("Value of uninitialised member of array is %d\n",arr6[4]);

//////////////////////////////////////////////////////////////////////////////

	// We can not initialise the elements greater that size of the array as c++ performs strinct 
	// but it is ignored by the c compiler
	// int arr7[4] = {10,20,30,40,50,60};			// Error

//////////////////////////////////////////////////////////////////////////////

	// We can initialise the array in member initialisation manner  or member by meber initialisation
	int arr8[5] = {10,20,30,40,50};
	int arr9[5];
	arr9[0] = 10;	arr9[1] = 20;	arr9[2] = 30;	arr9[3] = 40;	arr9[4] = 50;

//////////////////////////////////////////////////////////////////////////////
	
	// Name of the array is itself base address of array and we can not change that address
	int arr10[4];
	printf("Base address of array is %u\n",arr10);

//////////////////////////////////////////////////////////////////////////////

	// We can access the elements of array in multiple ways
	int arr11[4] = {10,20,30,40};
	printf("Accessing array elements in diffrent ways \n");
	printf("%d \t", arr11[2]);
	printf("%d \t", 2[arr11]);
	printf("%d \t", *(arr11 + 2));
	printf("%d \t", *(2 + arr11));

//////////////////////////////////////////////////////////////////////////////

	// We can not use assignment operator for assigning one array into another
	int arr12[2] = {10,20};
	int arr13[2];

	// arr13 = arr12;	// Error

//////////////////////////////////////////////////////////////////////////////

	// We can use equality operators on array but it gives a fixed result as it compaires base address of the array.
	// And base address of any two array is always diffrent
	int arr14[2] = {10,20};
	int arr15[2] = {10,20};
	if( arr14 == arr15)
	{
		printf("\nBoth the arrays are equal\n");
	}
	else
	{
		printf("\nBoth the arrays are not equal\n");
	}

	// To compaire the array we have to compaire it mtmber by member by using loop

//////////////////////////////////////////////////////////////////////////////

return 0;
}