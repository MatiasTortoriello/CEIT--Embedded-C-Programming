#include <stdio.h>

int main(){

	int num;	/* 1234 */
	int resto;
	int resultado = 0;

	printf("Ingrese un número entero: \n");
	scanf("%d", &num);
	printf("num = %d\n", num);

	while(0 < num){
		resto = num%10;
		resultado += resto;	// resultado = resultado + resto;
		num /= 10;		// num = num/10
	}
	
	printf("La suma de todos lo dígitos es: %d \n", resultado);
	return 0;
}
