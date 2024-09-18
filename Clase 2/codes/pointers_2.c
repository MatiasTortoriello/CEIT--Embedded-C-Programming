#include<stdio.h>

  int main(){
	  int var = 10;
	  int *pVar = &var;
	  
	  printf ("Value of var = %d\tAddress of var = %p\n", var, &var);
	  printf ("Value of *pVar = %d\tAddress of *pVar = %p\n", *pVar, &(*pVar));

	  return 0;
}
