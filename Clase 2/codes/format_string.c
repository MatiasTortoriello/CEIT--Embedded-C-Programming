#include <stdio.h>

int main(){

	char str[8];	// char str[] = "Texto de prueba"

	/* Formato para strings: */

	fprintf(stdout, "Enter a string: %s\n", str);
	scanf("%3s", str);
	fprintf(stdout, "The entered string is: %s\n", str);
	
	/* El caracter nulo \0 se agrega al final por defecto */
	
	printf("%03s\n", "Hello World!!!\n");
	printf("%.3s\n", "Hello World!!!\n");
	printf("%020s\n", "Hello World!!!\n");
	printf("%8.3s\n", "Hello World!!!\n");
	
	//fprintf(stdout, "%3s\n", "Hello World!!!\n");
	//fprintf(stdout, "%.3s\n", "Hello World!!!\n");
	//fprintf(stdout, "%20s\n", "Hello World!!!\n");
	//fprintf(stdout, "%8.3s\n", "Hello World!!!\n");

	return 0;
}
