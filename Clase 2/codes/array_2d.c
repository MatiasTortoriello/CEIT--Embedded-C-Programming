#include <stdio.h>
#include <string.h>

#define SIZE_R	3
#define SIZE_C	4
int main(){
	
	/* Inicialización estática */
	//int intMatrix[SIZE_R][SIZE_C] = {0};
	
	int intMatrix[SIZE_R][SIZE_C] = {{1, 2, 3, 4},
					{2, 4, 6, 8},
					{10, 20, 30, 40}};	
	
	/* Inicialización usando memset */
	memset(intMatrix, 'a', sizeof(intMatrix));	

	/* Imprimimos un solo elemento del array */
	printf("intMatrix[3][2] = %d\n", intMatrix[2][3]);
	
	/* Imprimimos intArray */
	printf("Initialized intMatrix values are:\n");

	int index = 0;
	for(int i = 0; i < SIZE_R; i++)
		for(int j = 0; j < SIZE_C; j++)
			printf("intMatrix[%d][%d] = %c\taddress = %p\n", i, j, intMatrix[i][j], intMatrix[i] + j);

	/* Actualización de los valores de intArray */
	for(int i = 0; i < SIZE_R; i++)
		for(int j = 0; j < SIZE_C; j++)
			intMatrix[i][j] = 10*i + j;
	
	/* Imprimimos intArray */
	printf("Updated intMatrix values are:\n");
	for(int i = 0; i < SIZE_R; i++)
		for(int j = 0; j < SIZE_C; j++)
			printf("intMatrix[%d][%d] = %d\taddress = %p\n", i, j, intMatrix[i][j], intMatrix[i] + j);

	return 0;
}
