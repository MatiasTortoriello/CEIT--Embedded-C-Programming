#include <stdio.h>

int main(){
	
	int num;
	char c;

	printf("Enter an integer number: ");
	scanf("%d", &num);
	printf("\n");
	
	printf("The number is = %d\n", num);

	printf("Enter a character: ");
	//scanf("%c", c);
	
	getchar();
	c = getchar();
	printf("\n");
	
	printf("The caracter is = %c\n", c);
	printf("The caracter is = %x\n", c);
	printf("The caracter is = %u\n", c);
		
	switch (c){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("The input character is vowel.\n");
		break;
	default:
		printf("The input character is not vowel.\n");
		break;

			

	}



	return 0;
}
