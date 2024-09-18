#include <stdio.h>
#include <string.h>

int main(){

	char c[] = "bad";
	char d[] = "bad";
	printf("%u\n","good");
	printf("%u\n", "good");

	/* Acá estamos comparando cadenas de caracteres constantes. */
	if("bad" == "bad")
		printf("Same\n");
	else
		printf("Not same\n");

	/* Acá estamos comparando direcciones de memoria */
	if(c == d)
		printf("Same\n");
	else
		printf("Not same\n");
	
	/* Acá estamos comparando el contenido de dos variables string */
	if (!strcmp(c, d))
		printf("Same\n");
	else
		printf("Not same\n");

	return 0;
}
