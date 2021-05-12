#include<stdio.h>
#include<math.h>
// This program demonstate Bitwise Operators

int decimal_binary(int n)  /* Function to convert decimal to binary.*/
{
	int rem, i=1, binary=0;

	while (n!=0)
	{
		rem=n%2;
		n = n / 2;
		binary = binary + rem*i;
		i = i * 10;
	}

	return binary;
}

void And_Operator()
{
	printf("\n----------------Bitwise AND operator-------------------");
	printf("\nBinary of 22 is %d",decimal_binary(22));
	printf("\nBinary of 16 is %d",decimal_binary(16));

	printf("\nAfter bitwise AND output is %d\n",decimal_binary(22 & 16));
}

void Or_Operator()
{
	printf("\n----------------Bitwise OR operator-------------------");
	printf("\nBinary of 22 is %d",decimal_binary(22));
	printf("\nBinary of 16 is %d",decimal_binary(16));

	printf("\nAfter bitwise OR output is %d\n",decimal_binary(22 | 16));
}

void Xor_Operator()
{
	printf("\n----------------Bitwise XOR operator-------------------");
	printf("\nBinary of 22 is %d",decimal_binary(22));
	printf("\nBinary of 16 is %d",decimal_binary(16));

	printf("\nAfter bitwise OR output is %d\n",decimal_binary(22 ^ 16));
}

void Not_Operator()
{
	printf("\n----------------Bitwise NOT operator-------------------");
	printf("\nBinary of 22 is %d",decimal_binary(22));

	printf("\nAfter bitwise NOT output is %d\n",decimal_binary(~22));
}

void Left_Shift_Operator()
{
	printf("\n----------------Left Shift operator-------------------");
	printf("\nBinary of 40 is %d",decimal_binary(40));
	printf("\nBinary of 3 is %d",decimal_binary(3));

	printf("\nAfter Left shifting 40 by 3 output is %d\n",decimal_binary(40<<3));
	printf("Output in decimal is %d\n",40<<3);
}

void Right_Shift_Operator()
{
	printf("\n----------------Right Shift operator-------------------");
	printf("\nBinary of 40 is %d",decimal_binary(40));
	printf("\nBinary of 3 is %d",decimal_binary(3));

	printf("\nAfter Right shifting 40 by 3 output is %d\n",decimal_binary(40>>3));
	printf("Output in decimal is %d\n",40>>3);
}

int main()
{
	And_Operator();
	Or_Operator();
	Xor_Operator();
	Not_Operator();
	Left_Shift_Operator();
	Right_Shift_Operator();
	return 0;
}