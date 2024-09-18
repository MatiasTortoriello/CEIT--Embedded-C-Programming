#include <stdio.h>
#include <inttypes.h>

/* Declaración de funciones */
uint8_t drawLine(uint8_t);

int main(){
	/* Llamada a las funciones */
	uint8_t scripts = 10;
	drawLine(++scripts);
	drawLine(++scripts);
	drawLine(++scripts);
	drawLine(++scripts);
	drawLine(++scripts);
	
	return 0;
}

/* Definición de funciones */
uint8_t drawLine(uint8_t lineLen){
	for(int i = 0; i < lineLen; i++)
		printf("-");
	printf("\n");
	return lineLen;
}
