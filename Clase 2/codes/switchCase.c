#include <stdio.h>

int main(){
	
	int num1, num2, opt;

	printf("Ingrese el primer número entero: \n");
	scanf("%d", &num1);
	printf("Ingrese el segundo número entero: \n");
	scanf("%d", &num2);
	printf("Seleccione una de las siguientes opciones:\n\
			1- add\n\
			2- sub\n\
			3- mul\n\
			4- div\n");

	scanf("%d", &opt);
	switch (opt){
		case 1:
			printf("Suma de ambos números = %d\n", num1 + num2);
			break;
		case 2:
			printf("Resta entre ambos números = %d\n", num1 - num2);
			break;
		case 3:
			printf("Multiplicación de ambos números = %d\n", num1*num2);
			break;
		case 4:
			printf("División de ambos números = %d\n", num1/num2);
			break;
		default:
			printf("Comando inválido.\n");
			break;
	}

	return 0;
}
