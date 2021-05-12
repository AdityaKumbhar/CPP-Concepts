// If the header file is in the current directory then we can use " "
// And if the file is in system spcified path then we can use < >
#include"Header_File.h"

int main()
{
fun();
printf("Value of variable i is %d\n",i);

struct demo obj;
obj.i = 10;

printf("MAcro from header file has value %d\n",MAX);
return 0;
}

void fun()
{
	printf("Inside the function fun\n");
}