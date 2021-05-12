#include<stdlib.h>
#include<stdio.h>

int main()
{
	int *p = NULL;
	int *q = NULL;
	int *x = NULL;

// Allocating memory 40 bytes using malloc
p = (int*)malloc(40);
if(p == NULL)
{
	printf("Unable to allocate the memory\n");
	return 0;
}

// Increasing the allocated memory by 20 bytes using realloc
p = (int*)realloc(p, 60);
if(p == NULL)
{
	printf("Unable to allocate the memory\n");
	return 0;
}

// Decreasing the alocated memory by 30 bytes using realloc
p = (int*)realloc(p, 30);
if(p == NULL)
{
	printf("Unable to allocate the memory\n");
	return 0;
}

// Allocate the memory by using realloc by passing first parameter as NULL
q = (int*)realloc(NULL, 40);
if(q == NULL)
{
	printf("Unable to allocate the memory\n");
	return 0;
}

// Free the memory by using free
free(p);

// Free the memory by using realloc
realloc(q, 0);
if(q == NULL)
{
	printf("Unable to allocate the memory\n");
	return 0;
}

// Allocate memory by using calloc for 10 integers
x = (int *)calloc(10, sizeof(int));
if(x == NULL)
{
	printf("Unable to allocate the memory\n");
	return 0;
}

return 0;
}