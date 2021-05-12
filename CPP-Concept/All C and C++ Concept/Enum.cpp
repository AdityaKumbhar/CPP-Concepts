#include<stdio.h>

int fun()
{
return 410;
}
int main()
{
	printf("Demo of enum constants\n");

	//demo is name of enumeration constant which contains values a,b,c
	enum demo1 {a, b, c};
	
	// When we can not initialize the values explicitely then it gets by default initializes from 0
	printf("\nValue of a %d\n",a);
	printf("Value of b %d\n",b);
	printf("Value of c %d\n",c);

	// We can explicitely initialize the enum constant
	enum demo2 {x = 2, y, z};
	printf("\nValue of x %d\n",x);
	printf("Value of y %d\n",y);
	printf("Value of z %d\n",z);

	// We can use same constant values for multiple variables
	enum demo3 {l = 1, m = -5, n = 1};
	printf("\nValue of l %d\n",l);
	printf("Value of m %d\n",m);
	printf("Value of n %d\n",n);

	// We can not change values of enumerated constants values
	// l++;	// Error

	// Memory for enum is not allocated 
	// therefore we can not create pointer which stores address of enum

	// int *p = &a;
	
	// We can initialise enum values with any expression that evaluates to an integral value
	enum hello {aa = 'a',bb = 45-2 ,cc = 10/3};
	printf("\nValue of aa %d\n",aa);
	printf("Value of bb %d\n",bb);
	printf("Value of cc %d\n",cc);

	// We can create enum variable and for that variable memory is allocated
	// In this case obj is a variable of type enum demo3
	enum demo3 obj = m;

	printf("Value of obj is %d and its address is %u\n",obj,&obj);

	// We can not assign constant value to enume variable
	//enum demo3 obj = 10;	// Error

	// We can create enum variable at the time of defining enum
	enum demo5 {o, p}obj1, obj2;
	// In this case obj1 and obj2 are variables of enum demo5

	// We can also create unnamed enum as
	enum{q, r};

	// We can use enum variable as a member of structure or union
	struct fun
	{
		enum demo3 j;
	};
	return 0;
}