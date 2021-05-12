#include<stdio.h>

int decimal_binary(int n)  /* Function to convert decimal to binary.*/
{
	int rem, i=1, binary=0;

	while (n!=0)
	{
		rem = n % 2;
		n = n / 2;
		binary = binary + rem*i;
		i = i * 10;
	}

	return binary;
}

int main()
{
	int no,temp,position;

	printf("Enter number:\n");
	scanf("%d",&no);

	printf("Enter bit position to set:\n");
	scanf("%d",&position);

	printf("Original number in binary format is %d\n",decimal_binary(no));

	temp = 1<<(position-1);
	no = no | temp;

	printf("Modified number in binary format is %d\n",decimal_binary(no));

	return 0;
}