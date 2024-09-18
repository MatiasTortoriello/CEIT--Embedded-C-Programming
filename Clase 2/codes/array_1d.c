#include <stdio.h>

#define SIZE	10

int main(){
	int size = 15;
	
	/* Declaraciones inválidas */
	int intArray2[size] = {0};
	size = 17;

	/* Declaracion válida */
	int intArray[SIZE] = {[0 ... (SIZE/2 - 1)] = 0, [(SIZE/2) ... (SIZE - 1)] = 1};
	
	/* Sin inicializar:
	 * 	 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___
	 *	|_G_|_G_|_G_|_G_|_G_|_G_|_G_|_G_|_G_|_G_|_G_|_G_|_G_|_G_|_G_|
	 *
	 * Con la inicialización:
	 * 	 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___
	 *	|_0_|_0_|_0_|_0_|_0_|_0_|_0_|_0_|_1_|_1_|_1_|_1_|_1_|_1_|_1_|
	 * 	 
	 * */

	/* Imprimimos un solo elemento del array */
	printf("intArray[4] = %d\n", intArray[4]);
	
	/* Imprimimos intArray */
	printf("Initialized intArray values are:\n");
	for(int i = 0; i < SIZE; i++)
		printf("intArray[%d] = %d\n", i, intArray[i]);

	/* Actualización de los valores de intArray */
	for(int i = 0; i < SIZE; i++)
		intArray[i] = 10*i;
	
	/* Imprimimos intArray */
	printf("Now, intArray values are:\n");
	for(int i = 0; i < SIZE; i++)
		printf("intArray[%d] = %d\n", i, intArray[i]);

	return 0;
}
