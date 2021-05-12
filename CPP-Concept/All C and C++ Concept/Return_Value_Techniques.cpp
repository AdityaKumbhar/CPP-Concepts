/* 
   THE FOLLOWING PROGRAM WILL ILLUSTRATES :
	   THE USE OF RETURN VALUE TECHNIQUES THROUGH THE FUNCTIONS...
*/
#include<iostream>

using namespace std;

int global = 20;		// Global variable is created with name 'global'...

int arr[] = {10,20};	// array of two integers is declared globally...

// user-defined function definations starts from here...

int ReturnByValue()
{
	int x = 60;
	cout<<"\nReturnByValue";

	return x;	// value of 'x' return, return value for function is 'int'
}

int * ReturnByAddress()
{
	// Do not return address of local variable as a return value...
	cout<<"\nReturnByAddress";
	global = 30;

	return &global;		// address of 'global' is returned from the function...
	// accepter for the function call must be of type " int * "
}

int	& ReturnByReference()
{
	// Do not return reference of local variable as a return value
	cout<<"\nReturnByReference";

	return arr[1];
}

int main()
{
	int local;			// one integer is declared with name 'local'

	local = ReturnByValue();
	cout<<"\nReturn value is "<<local;		// output : 60

	int * p = ReturnByAddress();
	cout<<"\nValue of global variable is "<<*p;	// output : 30

	cout<<"\nValue of array member before call "<<arr[1];	// o/p : 20
	ReturnByReference() = 50;
	cout<<"\nValue of array member after call "<<arr[1];	// o/p : 50

	return 0;
}