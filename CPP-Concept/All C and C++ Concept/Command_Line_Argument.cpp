// This program demonstate consept of command line argument

#include<stdio.h>

// If we pass the argument while running the program then it
// is called as command line arguments

// Entry point function has three arguments as 
// argv : It is array of haracter pointers which points to arguments passed to the application
// argc : It is the number which stores number of arguments passed to the application
// envp : It is the enviornmrnt variable
int main(char *argv[], int argc, int envp)
{
	int i = 0;
	printf("Program which demonstate the consept of command line arguments\n");

	printf("Arguments passed to our application is %d\n",argc - 1);

	printf("Arguments passed are \n");
	for(i = 0; i < argc - 1; i++)
	{
		printf("Argument number %d is %s\n",i , argv[i]);
	}
	return 0;
}