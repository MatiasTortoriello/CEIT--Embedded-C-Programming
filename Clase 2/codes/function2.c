#include <stdio.h>
#define LINE_LEN	10

/* Declaración de funciones */
void drawLine(void);

int main(){
	/* Llamada a las funciones */
	drawLine();
	drawLine();
	drawLine();
	drawLine();
	drawLine();
	
	return 0;
}

/* Definición de funciones */
void drawLine(void){
	for(int i = 0; i < LINE_LEN; i++)
		printf("-");
	printf("\n");
}
