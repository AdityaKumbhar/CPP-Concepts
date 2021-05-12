// This program demonstates string library functions in c

#include<stdio.h>
#include<string.h>

int main()
{
	/*
		char *strcpy( char *dest, const char *src );
		Copies the byte string pointed to by src to byte string, pointed to by dest.
	*/
	char src1[6] = "Hello";
	char dest1[6];
	printf("-----------------Demo of strcpy-----------------\n");
	strcpy(dest1,src1);

	printf("Source string : %s\n",src1);
	printf("After copy destination string is %s\n",dest1);

	/*
		char *strncpy( char *dest, const char *src, size_t count );
		Copies at most count characters of the byte string pointed 
		to by src (including the terminating null character) to character array pointed to by dest.
	*/

	char src2[12] = "Hello World";
	char dest2[12];

	printf("\n\n-----------------Demo of strncpy-----------------\n");

	strncpy(dest2,src2,4);

	// We have to explicitely insert \0 at the end of string
	dest2[4]='\0';
	
	printf("Source string : %s\n",src2);
	printf("After copying 4 bytes destination string is %s\n",dest2);

	/*
		char *strcat( char *dest, const char *src );
		Appends a byte string pointed to by src to a byte string pointed 
		to by dest. The resulting byte string is null-terminated.
	*/

	char src3[50] = "Hello ";
    char dest3[50] = "World!";
 
	printf("\n\n-----------------Demo of strcat-----------------\n");
	printf("Source string : %s\n",src3);
	printf("Destination string is %s\n",dest3);

	strcat(src3, dest3);

	printf("After concatenation string is %s\n",src3);

	/*
		char *strncat( char *dest, const char *src, size_t count );
		Appends a byte string pointed to by src to a byte string 
		pointed to by dest. At most count characters from src are copied. 
		The resulting byte string is null-terminated.
	*/

	char src4[50] = "Hello ";
    char dest4[50] = "World!";
 
	printf("\n\n-----------------Demo of strncat-----------------\n");
	printf("Source string : %s\n",src4);
	printf("Destination string after concatenating 3 characters is %s\n",dest4);

	strncat(src4, dest4,3);

	printf("After concatenation string is %s\n",src4);

	/*
		size_t strlen( const char *str );
		Returns the length of the given byte string.
		It counts bytes till first \0 in given string.
	*/

	char src5[50] = "Hello ";
 
	printf("\n\n-----------------Demo of strlen-----------------\n");
	printf("Source string : %s \n",src5);
	printf("Sting length is %d\n",strlen(src5));

	/*
		int strcmp( const char *str1, const char *str2 );
		This function starts comparing the first character of each string. If they are equal 
		to each other, it continues with the following pairs until the characters differ or 
		until a terminating null-character is reached.

		Returns an integral value indicating the relationship between the strings:
		A zero value indicates that both strings are equal.
		A value greater than zero indicates that the first character that does not match has a 
		greater value in str1 than in str2; And a value less than zero indicates the opposite.
	*/

	char src6[50] = "Hello";
    char dest6[50] = "Hello";
 
	printf("\n\n-----------------Demo of strcmp-----------------\n");
	printf("First string : %s\n",src6);
	printf("Second string : %s\n",dest6);

	if(strcmp(src6,dest6)== 0)
	{
		printf("Both the strings are equal\n");
	}
	else
	{
		printf("Both the strings are not equal\n");	
	}

	/*
		int strcmp( const char *string1, const char *string2 );
		stricmp compares string1 and string2 without sensitivity to case. 
	*/

	char src12[50] = "Hello";
    char dest12[50] = "HElLo";
 
	printf("\n\n-----------------Demo of stricmp-----------------\n");
	printf("First string : %s\n",src12);
	printf("Second string : %s\n",dest12);

	if(stricmp(src12,dest12)== 0)
	{
		printf("Both the strings are equal\n");
	}
	else
	{
		printf("Both the strings are not equal\n");	
	}

	/*
		int strncmp ( const char * str1, const char * str2, size_t num );
		Compare characters of two strings
		Compares up to num characters of the C string str1 to those of the C string str2.
		This function starts comparing the first character of each string. 
		If they are equal to each other, it continues with the following pairs until the characters differ, 
		until a terminating null-character is reached, or until num characters match in both strings, whichever happens first.
	*/

	char src7[50] = "Hello World";
    char dest7[50] = "Hello";
 
	printf("\n\n-----------------Demo of strncmp-----------------\n");
	printf("First string : %s\n",src7);
	printf("Second string : %s\n",dest7);

	if(strncmp(src7,dest7,5)== 0)
	{
		printf("Both the strings are equal\n");
	}
	else
	{
		printf("Both the strings are not equal\n");	
	}

	/*
		char * strchr ( const char * str, int character );
		Returns a pointer to the first occurrence of character in the C string str.
	*/

	 char str8[] = "This is a sample string";
	 char * p;

	 printf("\n\n-----------------Demo of strchr-----------------\n");

	 printf ("String is : %s\n", str8);
	 p = strchr(str8,'s');
	 printf ("Character s is found at location %d\n", p - str8 + 1);

	 printf("Search all occurance of character s is:\n");
	 while (p != NULL)
	{
		printf ("Found at position : %d\n",p - str8 + 1);
		p = strchr(p + 1,'s');
	}

	 /*
		char *strrchr( const char *str, int ch );
		Finds the last occurrence of ch (after conversion to char) in the byte 
		string pointed to by str. 
		The terminating null character is considered 
		to be a part of the string and can be found if searching for '\0'.
	 */

	 char str9[] = "This is a sample string";
	 char * p2;

	 printf("\n\n-----------------Demo of strrchr-----------------\n");

	 printf ("String is : %s\n", str9);
	 p2 = strrchr(str9,'s');
	 printf ("Last occurance of character s is at position %d\n", p2 - str9 + 1);

	 /*
		char *strstr( const char* str, const char* substr );
		Finds the first occurrence of the byte string substr in the 
		byte string pointed to by str. The terminating null characters are not compared.
	 */

	char str10[] = "Pre-Placement UNIX SDK PPL";
	char str11[] = "Placement";
	char *p3;

	printf("\n\n-----------------Demo of strstr-----------------\n");

	printf ("Source String is : %s\n", str10);
	printf ("Destination String is : %s\n", str11);

	p3 = strstr(str10,str11);
	if(p3 == NULL)
	{
		printf("There is no substring\n");
	}
	else
	{
		printf("%s is a substring of %s at location %d\n",str11,str10,p3-str10+1);
	}

	/*
		char * strtok ( char * str, const char * delimiters );
		A sequence of calls to this function split str into tokens, which are sequences 
		of contiguous characters separated by any of the characters that are part of delimiters.
	*/

	char str13[] ="First Second Third Fourth Fifth";
	char * p5;
	
	printf("\n\n-----------------Demo of strstr-----------------\n");

	printf("Original string is : %s\n",str13);
	
	printf("Tokens in string are:\n");
	p5 = strtok (str13," ");
	while (p5 != NULL)
	{
		printf ("%s\n",p5);
		p5 = strtok (NULL, " ");
	}

	return 0;
}