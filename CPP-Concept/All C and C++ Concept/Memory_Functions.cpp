// This program demonstrate all the functions related to memory

#include<stdio.h>
#include<string.h>
/*


void *memmove(void *dst, const void *src, size_t len)
memmove is just like memcpy except that memmove is guaranteed to work even if the memory areas overlap


*/

int main()
{

/*
// memchr()
void * memchr ( const void * ptr, int value, size_t num );

Searches within the first num bytes of the block of memory pointed by ptr for the first occurrence
of value and returns a pointer to it.

*/
printf("\nDemo of memchr() function\n");
char * p;

char str[] = "Pre-Placement UNIX SDK";

p = (char*) memchr (
										str,					// Pointer to the block of memory where the search is performed.
										'e',					// Value to be searched
										strlen(str)		// Number of bytes to be analyzed.
									);

if (p!=NULL)
{
	printf ("'e' found first at position %d.\n", p - str + 1);
}
else
{
	printf ("'e' not found.\n");
}

/*
memcmp()
int memcmp(const void *ptr1, const void *ptr2, size_t len)

memcmp is similar to strcmp, except that bytes equal to 0 are not treated as comparison terminators.
*/
char buffer1[] = "Win32 SDK";
char buffer2[] = "Win64 SDK";

int n;

n = memcmp ( 
						buffer1,					// Pointer to block of memory.
						buffer2,					// Pointer to block of memory.
						sizeof(buffer1)		// Number of bytes to compare
						);

if (n > 0) 
{
	printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
}
else if (n<0)
{
	printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
}
else
{
	printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);
}

/*
memcpy()

void *memcpy(void *dst, const void *src, size_t len)

memcpy copies len characters from src to dst and returns the original value of dst
The result of memcpy is undefined if src and dst point to overlapping areas of memory
*/

struct demo
{
	char name[40];
	int no;
}src,dest;

char Source[] = "Advanced Operating System";
char Destination[sizeof(Source)];


memcpy (
				Destination,				// Pointer to the destination array where the content is to be copied
				Source,						// Pointer to the source of data to be copied
				strlen(Source)+1		// Number of bytes to copy
				);

printf("After copy contents are %s \n",Destination);

// By using memcpy we can copy whole structure also
strcpy(src.name,"Hello");
src.no = 20;

memcpy(
				&dest,
				&src,
				sizeof(src)
				);

printf("Contents of structure after copy is %s %d\n",dest.name,dest.no);


/*
memset()

void *memset(void *ptr, int byteval, size_t len)

memset sets the first len bytes of the memory area pointed to by ptr to the value specified by byteval
*/

char str1[] = "Kernel Modules and Device Drivers";

memset (
				str1,		// Pointer to the block of memory to fill
				'-',			// Value to be set
				6				// Number of bytes to be set
				);

printf( "String after memset is %s\n",str1);

return 0;
}