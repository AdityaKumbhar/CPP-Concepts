#include<stdio.h>
 
int main()
{
   int a = 20;
   int c ;
 
   printf("Demo of increment operator\n\n");

   // Value of a will not be increased before assignment.
   c = a++;   
   printf("Line 1 - Value of a++ is : %d\n",c);

   // After expression value of a is increased
   printf("Line 2 - Value of a is : %d\n",a);

   // Value of a will be increased before assignment.
   c = ++a;  
   printf("Line 3 - Value of ++a is : %d\n",c);

   printf("If there is no assignment then pre and post increment operator worked in same way\n");
   ++a;
   printf("Value of after preincremet is %d\n",a);
 
   a++;
   printf("Value of after postincremet is %d\n",a);

   a = 20;
 
   printf("Demo of decrement operator\n\n");

   // Value of a will not be decreased before assignment.
   c = a--;   
   printf("Line 1 - Value of a-- is : %d\n",c);

   // After expression value of a is decreased
   printf("Line 2 - Value of a is : %d\n",a);

   // Value of a will be decreased before assignment.
   c = --a;  
   printf("Line 3 - Value of --a is : %d\n",c);

   printf("If there is no assignment then pre and post decrement operator worked in same way\n");
   --a;
   printf("Value of after preincremet is %d\n",a);
 
   a--;
   printf("Value of after postincremet is %d\n",a);
   return 0;
}