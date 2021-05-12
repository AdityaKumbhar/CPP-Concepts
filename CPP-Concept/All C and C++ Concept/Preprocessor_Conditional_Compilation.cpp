// This program demonstates working of conditional compilation directives

//Conditional compilation directives delimit blocks of program text that are compiled only if a specified condition is true.

#include<stdio.h>
#include<iostream>

int main()
{
	int  no = 0;

	// #if directivfe
	#if (no==0)
		printf("Inside if directives\n");
	#endif

	// #if and #else directive
	#if ((no+5) == 6)
		printf("Inside if directives\n");
	#else
		printf("Inside else directives\n");
	#endif

	// #if and #elif direcive
	#if (no == 6)
		printf("Inside if directives\n");
	#elif (no == 0)
		printf("Inside else if directives\n");
	#endif

	// #ifdef directive
	#define MAX
	#ifdef MAX
		printf("MAX is defined\n");
	#endif

	// #ifndef directive
	#undef MAX
	#ifndef MAX
		printf("MAX is not defined\n");
	#endif

	return 0;
}