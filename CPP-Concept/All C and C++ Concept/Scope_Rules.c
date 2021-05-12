// Program which demonstrate scope rules of variable

#include<stdio.h>

/*
Identifiers are accessible only with the block in which they are declared
They are unknown outside the boundaries of that block
Blocks may be defined inside of other blocks
A variable may be redefined inside an inner block
The innermost block's variable declarations take precedence over the outer block
*/

void Nested_Blocks()
{
	int a = 2;
	int b = 10;

	printf ("\na=%d", a);
	printf ("\nb=%d", b);
	{
		int a = 5;
		printf ("\na=%d", a);
		printf ("\nb=%d", b);
		{
			int a = 10;
			printf ("\na=%d", a);
			printf ("\na=%d", b);
		}
	}
	printf ("\na=%d", a);
	printf ("\na=%d", b);
}

void Parallel_Blocks()
{

int a = 10;
int b = 40;
{
	int b = 20;
	printf("\nValue of b from first block %d",b);
}

{
	int b = 30;
	printf("\nValue of b from second block %d",b);
}

{
	int a = 30;
	b++;
	printf("\nValue of b from third block %d",b);
}

	printf("\nValue of b from outside all block %d",b);
}

int main()
{

	Nested_Blocks();

	Parallel_Blocks();
return 0;
}