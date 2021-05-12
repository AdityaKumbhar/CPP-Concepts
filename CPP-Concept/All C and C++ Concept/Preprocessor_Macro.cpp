// This programdemonstates macro

//A macro is a fragment of code which has been given a name.
//Whenever the name is used, it is replaced by the contents of the macro.by preprocessor

#include<iostream>
#include<stdio.h>

using namespace std;

void fun()
{
	// Redefining the macro which is already defined in main
	#define MAX 20
	printf("\nInside the function fun which define value of MAX as 20");
}

void ObjectLike_Macro()
{
	// Object-like Macros
	// An object-like macro is a simple identifier which will be replaced by a code fragment.
	// Preprocessor replace macro template with its replacement text by parsing the program sequentially.

	printf("\nDemo of Object like Macros\n");

	#define MAX 10
	// Here MAX is macro template and 10 is the replacement value.

	printf("\nValue of MAX is %d",MAX);
	fun();
	printf("\nValue of MAX after calling the function fun is %d\n",MAX);

	// We can use undef directive to undefine the macro which is defined by define directive
	// After undef we can not use the macro

	#undef MAX

	//printf("Value of MAX after undef %d\n",MAX);		// Error

}

void FunctionLike_Macro()
{
	// Function like macros are work like a normal functions

	printf("\nDemo of Function like Macros\n");

	#define ADD(x,y) x+y
	#define SUB(x,y) x-y

	// We can write multi line macro by writting  "\" at the end of each line
	#define MULTILINE(a,b) \
	printf("Inside multi line macro");\
	printf("Multiplication of %d & %d is %d",a,b,a*b);

	printf("\nAddition of 10 & 20 is %d\n",ADD(10,20));
	printf("Substraction of 10 & 20 is %d\n",SUB(10,20));

	MULTILINE(10,20);
}


void Stringised_Macro()
{
	// This macro is used to create string means it adds double coutes

	#define str(var) #var

	printf(str(\n\nInside Stringised_Macro\n));
}

void Concate_Macro()
{
#define str(first, second) first ## second

	int no1 = 100;

	printf("\nValue of no is by using cancatenation is %d\n",str(no,1));

}

void Predefined_Macro()
	{
	cout<<"\n Contents which are displayed by using predefined macro\n";

	cout << "\nThis is the line number " << __LINE__;
	cout << "\n of file " << __FILE__ << ".\n";
	cout << "\nIts compilation began " << __DATE__;
	cout << " \nat " << __TIME__ << ".\n";
	cout << "\nThe compiler gives a __cplusplus value of " << __cplusplus;
}

int main()
{
	int choice = 1;

	while(choice != 0)
	{
		printf("\nEnter choice:\n");
		printf("1:Object like macro\n2:Function like macro\n3:Stringised macro\n4:Concat macro\n5:Predefined macro\n0:Exit\n");
		scanf("%d",&choice);

		switch(choice)
		{
		case 1:
			ObjectLike_Macro();
			break;

		case 2:
			FunctionLike_Macro();
			break;

		case 3:
			Stringised_Macro();
			break;

		case 4:
			Concate_Macro();
			break;

		case 5:
			Predefined_Macro();
			break;

		case 0:
			return 0;
		}

	}
	return 0;
}
