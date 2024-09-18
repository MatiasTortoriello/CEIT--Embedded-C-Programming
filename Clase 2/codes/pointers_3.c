/* Print address of variables using address operator. */
#include<stdio.h>

  int main(){
	  int a = 5;
	  int *pA = &a;
	  
	  printf ("Value of pA = Address of a = %p\n", pA);
	  printf ("Value of ++pA = %p\n", ++pA);
	  printf ("Value of pA++ = %p\n", pA++);
	  printf ("Value of --pA = %p\n", --pA);
	  printf ("Value of pA-- = %p\n", pA--);
	  printf ("Value of pA = %p\n", pA);

	  return 0;
}
