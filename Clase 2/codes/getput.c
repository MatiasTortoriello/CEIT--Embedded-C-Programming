#include <stdio.h>

int main(){
	char ch;
	
	fprintf(stdout, "Enter a character.\n");
	ch = getchar();
	fprintf(stdout, "The entered character is: ");
	putchar(ch);
	fprintf(stdout, "\n");

	return 0;
}
