#include <stdio.h>

#define SIZE	15

int main(){
	
	char str1[SIZE] = {'A', 'r', 'g', 'e', 'n', 't', 'i', 'n', 'a', '\0' };
	char str2[SIZE] = "Argentina"; /* En este caso, el caracter nulo es ubicado al final automáticamente. */

	printf("str1 is %s\n", str1);
	printf("str2 is %s\n", str2);
	printf("Enter a new value for the str2: ");
	scanf( "%s", str2);
	printf("str2 is %s\n", str2);

	return 0;
}
