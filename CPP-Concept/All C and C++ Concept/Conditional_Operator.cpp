// This program demonstate working of conditional operator

#include<stdio.h>

int main()
{

int no = 10;
int ans;

// Normal if else code
if(no == 10)
{
	ans = 1;
}
else
{
	ans = 0;
}

// The above same code can be written by using conditional operator
(no == 10) ? (ans = 1):(ans = 0);

// Nested if else code
int x = 15;
if(no == 10)
{
	if(x < 10)
	{
		--x;
	}
	else
	{
		++x;
	}
}
else
{
	ans = 1;
}

// The above same code can be written by using conditional operator
// We can use any number of nesting while using this conditional operator

(no == 10)?((x < 10) ? (--x) : (++x)) : (ans = 1);


return 0;
}