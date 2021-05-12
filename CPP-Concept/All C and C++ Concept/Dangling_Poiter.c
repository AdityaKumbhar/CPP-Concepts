#include<stdio.h>

// Dangling pointer is pointer which still points to the memory location of the deallocated memory.

int main()
{
	int *first;
	int *second;

	first = (int*)malloc(40);
	if(NULL == first)
	{
		printf("Unable to allocate memory\n");
		return 0;
	}

	// copy the contents of first pointer into second pointer
	// Means first and second pointer pointing to the same memory locations.

	second = first;

	// Deallocate the meory by using first pointer
	free(first);

	// Now second pointer is pointing to such a memory which is not existing
	// Now second pointer is called as Dangling pointer

	// If we tries to access memory locations with the help of second pointer
	// then there is a segmentation fault

	return 0;
}