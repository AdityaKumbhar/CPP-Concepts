#include<stdio.h>

int main()
{
int no = 2;
int no1,no2;
	
printf("Negative numbers are stored in 2's compliment format\n");

printf("Origanal number is %d\n",no);

no1 = ~no;
printf("1's complement is %d \n",no1);

no2 = no1 + 1;
printf("2's complement is %d \n",no2);

return 0;
}