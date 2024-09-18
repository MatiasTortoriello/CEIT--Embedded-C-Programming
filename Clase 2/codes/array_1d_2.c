#include <stdio.h>

#define SIZE	5

int main(){
	int intArray[SIZE];

	printf("Please, enter values of intaArray:\n");
	for(int i = 0; i < SIZE; i++){
		printf("intArray[%d] = ", i);
		scanf("%d/n", intArray + i);	
	}
	
	/* Imprimimos valores y direcciones de intArray */
	printf("Initialized intArray values are:\n");
	for(int i = 0; i < SIZE; i++)
		printf("intArray[%d] = %d\t address = %x\n", i, intArray[i], intArray + i);

	/* Actualización de los valores de intArray */
	for(int i = 0; i < SIZE; i++)
		intArray[i] *= 10;
	
	/* Imprimimos valores y direcciones de intArray */
	printf("Now, intArray values are:\n");
	for(int i = 0; i < SIZE; i++)
		printf("intArray[%d] = %d\t address = %x\n", i, intArray[i], intArray + i);

	return 0;
}
