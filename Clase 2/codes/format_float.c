#include <stdio.h>

int main(){
	float c, d;
	/* Especificamos que la variable c solo contendrá 3 dígitos */
	fprintf(stdout, "Enter a float number to be formated as \"xxx\": ");
	scanf("%3f", &c);
	fprintf(stdout, "The number is: %3f\n", c);

	/* Especificamos que las variables c y d contendrán 3 y 4 dígitos
	 *  con un salto de línea en el medio */
	fprintf(stdout, "Enter two float numbers to be formated as \"x.x\\nx.xx\": ");
	scanf("%3f\n%4f", &c, &d);
	fprintf(stdout, "The numbers are: %1.1f %1.2f\n", c, d);
	
	/* Especificamos que las variables c y d contendrán 3 y 4 dígitos
	 *  con un guión en el medio */
	fprintf(stdout, "Enter two float numbers to be formated as \"x.x-xx.x\": ");
	scanf("%3f-%4f", &c, &d);
	fprintf(stdout, "The numbers are: %1.1f-%2.1f\n", c, d);

	return 0;
}
