// This program demonstates arithematic operations on Array

#include<stdio.h>

int main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={1,2,3,4,5};

	//int i[5]={1,2,3,4,5,6,7}; //error to many intialisation

	printf("----------One dimentional array----------\n\n");

	printf("int a[5]={1,2,3,4,5};\n");

	printf("a = \t%d\n",a);

	printf("a[0] = \t%d\n",a[0]);

	printf("0[a] = \t%d\n",0[a]);

	printf("a[5] = \t%d\n",a[5]);

	printf("&a = \t%d\n",&a);

	printf("&a[4] = \t%d\n",&a[4]);

	printf("a+1 = \t%d\n",a+1);

	printf("&a+1 = \t%d\n",&a+1);

	printf("*(a+1) = \t%d\n",*(a+1));

	printf("*(1+a) = \t%d\n",*(1+a));

	printf("*(&a+1) = \t%d\n",*(&a+1));

	printf("b=a+1 = \t%d\n",a+1);

	printf("sizeof(a) = \t%d\n",sizeof(a));

	printf("sizeof(&a) = \t%d\n",sizeof(&a));

	printf("sizeof(a[1]) = \t%d\n",sizeof(a[1]));

	printf("sizeof(&(a[1])) = \t%d\n",sizeof(a[1]));

	if(a == b)
	{
		printf("Both arrays are equal\n");
	}
	else
	{
		printf("Both arrays are not equal\n");
	}

	printf("\n----------Two dimentional array----------\n\n");

	// Two dimentional array

	// int x[][]={1,2,3,4,5,6,7,8,9};//error
	// int x[][5]={1,2,3,4,5,6,7,8,9};//allowed
	// int x[5][]={1,2,3,4,5,6,7,8,9};//error
	// int x[][5]={{1,2,3},{4,5},{6},7,8,9,{1,2,3,4,5,6,6}};//error to many initialization

	int x[][5]={{1,2,3},{4,5},{6},7,8,9};

	/*
	1 2 3
	4 5
	6
	7 8 9
	*/


	printf("x[0][4] = \t%d\n",x[0][4]); //0

	printf("sizeof(x) = \t%d\n",sizeof(x)); //80

	printf("sizeof(&x) = \t%d\n",sizeof(&x)); //80

	printf("sizeof(x[1]) = \t%d\n",sizeof(x[1])); //20

	printf("sizeof(&(x[1])) = \t%d\n",sizeof(&(x[1]))); //4

	printf("sizeof(x[1][1]) = \t%d\n",sizeof(x[1][1])); //4

	printf("sizeof(&(x[1][1])) = \t%d\n",sizeof(&(x[1][1]))); //4

	printf("sizeof(x[10]) = \t%d\n",sizeof(x[10])); //20

	printf("sizeof(*(x+1)) = \t%d\n",sizeof(*(x+1))); //20

	printf("sizeof(*(*(x+1)+2)) = \t%d\n",sizeof(*(*(x+1)+2))); //4

	printf("&x = \t%d",&x); //1244976

	printf("x = \t%d\n",x); //1244976

	printf("x[0][0] = \t%d\n",x[0][0]); //1

	printf("x[0] = \t%d\n",x[0]); //1244976

	printf("x+1 = \t%d\n",x+1); //1244996

	printf("&x+1 = \t%d\n",&x+1); //1245056

	printf("x[0][0]+1 = \t%d\n",x[0][0]+1); //2

	printf("x[0]+1 = \t%d\n",x[0]+1); //1244980

	//////////////////////////////////////////////////////////////////////////////////////////

	printf("\n----------Three dimentional array----------\n\n");

	int arr[][3][2]={1,2,3,4,5,6,7,8,9};
	/*
	1 2
	3 4
	5 6
	7 8
	9 0
	0 0
	*/

	printf("sizeof(arr) = \t%d\n",sizeof(arr)); //48

	printf("sizeof(&arr) = \t%d\n",sizeof(&arr)); //48

	printf("sizeof(*arr) = \t%d\n",sizeof(*arr)); //24

	printf("sizeof(**arr) = \t%d\n",sizeof(**arr)); //8

	printf("sizeof(***arr) = \t%d\n",sizeof(***arr)); //4

	printf("arr[1][1][1] = \t%d\n",arr[1][1][1]); //0

	printf("arr = \t%d\n",arr); //1244928

	printf("&arr = \t%d",&arr); //1244928

	printf("arr+1 = \t%d\n",arr+1); //1244952

	printf("&arr+1 = \t%d\n",&arr+1); //1244976

	return 0;
}