/* Print address of variables using address operator. */
#include<stdio.h>

  int main(){
	  int age=30;
	  float sal = 1500.5;
	  char c = 'A';
	  int *pAge = &age;
	  float *pSal = &sal;
	  char *pChar = &c;
	  
	  printf ("Value of age = %d\t\tAddress of age = %p\n", age, &age);
	  printf ("Value of pAge = %p\tAddress of pAge = %p\n", pAge, &pAge);
	  printf ("Value of sal = %f\tAddress of sal = %p\n", sal, &sal);
	  printf ("Value of pSal = %p\tAddress of pSal = %p\n", pSal, &pSal);
	  printf ("Value of char = %c\t\tAddress of sal = %p\n", c, &c);
	  printf ("Value of pChar = %p\tAddress of pChar = %p\n\n", pChar, &pChar);

	  printf("sizeof(pAge) = %ld\tsizeof(pSal) = %ld\tsizeof(pChar) = %ld\n",
			  sizeof(pAge), sizeof(pSal), sizeof(pChar));

	  return 0;
}
