#include<stdio.h>

int main()
{
	// To store address of x data type we have to create pointer of x datatype
	// Means to store address of int we have to careate pointer of type integer

	int i = 10;
	int *p = &i;		// Allowed
	//char *c = &i;		// Error

	// void pointer can store address of any data type
	char c = 'h';
	float f = 3.12f;
	double d = 45.12;

	void *v1 = &i;		// Allowed
	void *v2 = &c;		// Allowed
	void *v3 = &f;		// Allowed
	void *v4 = &d;		// Allowed

	// To derefer void pointer we have to use typecasting otherwise there is error

	printf("%d\n",*(int*)v1);
	printf("%c\n",*(char*)v2);
	printf("%f\n",*(float*)v3);
	printf("%lf\n",*(double*)v4);

	// We can not use pointer arithematic on void pointer directly.
	// But we can use pointer arithematic using appropriate typecasting

	printf("Value of v4 before operation %d\n",v4);
	//v4 = v4 + 1;			// Error	
	v4 = (double*)v4 + 1;	// Allowed	
	printf("Value of v4 after operation %d\n",v4);

	// We can assign any pointer to void pointer directly
	v2 = p;
	v1 = p;

	return 0;
}