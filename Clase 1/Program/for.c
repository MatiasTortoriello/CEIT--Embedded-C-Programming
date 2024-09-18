/* Este es un 
 * programa de prueba */

// También se puede comentar usando barras dobles.

// En esta sección se encuentrn las directivas del 
// preprocesador.
#include <stdio.h>	
#define LOOPS	1000000

// Acá podemos declarar variables globales:
long int i;

// También podemos declarar funciones:
void forfunc(void);

int main(){
	long int count = 0;	// Esta es una variable local.
	forfunc();		// Esta es una sentencia y la llamada a la función.
	return 0;
}

// Esta es la definición de la función:
void forfunc(void){
	long int forCount = 0;	// Variable local.
	for(i = 0; i < LOOPS; i++);	// Sentencias
		forCount++;
}




