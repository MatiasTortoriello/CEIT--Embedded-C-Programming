#include <stdio.h>
#include <string.h>

int main(){
	char name[30] = "String de Prueba.";
	char name2[30] = {'\0'};
	char name3[30] = {'\0'};
	char number[] = "1000";
	int num = 0;

	/* Longitud de strings */
	printf("La longitud de name es: %ld\n", strlen((const char *)name));
	printf("name2 es inicializado a: %s\n", name2);	
	printf("name3 es inicializado a: %s\n", name3);	
	/* Se puede usar también puts(name2); */
	
	/* Copia de strings */
	strcpy(name2, name);
	printf("name2 ahora vale: %s\n", name2);

	/* Concatenación de strings */	
	strcat(name, " <- Concatenamos aquí.\n");
	
	/* sprintf es como printf pero en lugar de enviar la salida 
	 * formateada a stdout, lo guarda en una variable string. */
	sprintf(name3, "Número de Prueba: %d\n", 123U); 
	
	/* fprintf guarda la salida formateada en un archivo.
	 * En este caso particular a la salida estándar stdout. */
	fprintf(stdout, "%s", name3);

	/* sscanf hace lo mismo que scanf pero lee el contenido de
	 * un string y no de la entrada estándar stdin, y
	 * convierte lo leído a variables de diferentes tipos. */
	printf("El valor de num es = %d\n", num);
	sscanf(number, "%d", &num);
	printf("El valor de num ahora es = %d\n", num);
	
	return 0;
}
