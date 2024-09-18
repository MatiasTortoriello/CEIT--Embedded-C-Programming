#include <stdio.h>

int main(){
	/* Probar que sucede si ingresamos un número menor o mayor a lo 
	 * especificado.*/

	int a, b;

	/* Especificamos que la variable a solo contendrá 2 dígitos */
	fprintf(stdout, "Enter a number to be formated as \"xx\": ");
	scanf("%2d", &a);
	fprintf(stdout, "The number is: %d\n", a);

	/* Especificamos que las variables a y b contendrán 2 y 3 dígitos
	 *  con un salto de línea en el medio */
	fprintf(stdout, "Enter two numbers to be formated as \"xx\\nxxx\": ");
	scanf("%2d\n%3d", &a, &b);
	fprintf(stdout, "The numbers are: %d %d\n", a, b);
	
	/* Especificamos que las variables a y b contendrán 2 y 3 dígitos
	 *  con un guión en el medio */
	fprintf(stdout, "Enter two numbers to be formated as \"xx-xxx\": ");
	scanf("%2d-%3d", &a, &b);
	fprintf(stdout, "The numbers are: %d-%d\n", a, b);
	
	
	
	


	return 0;
}
