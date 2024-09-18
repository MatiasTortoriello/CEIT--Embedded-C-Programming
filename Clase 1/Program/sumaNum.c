#include <stdio.h>

int main(){

	int num, suma = 0;
	printf("Enter an integer number: ");
	scanf("%d", &num);
	printf("\n\n");

	while(num){
		suma += num%10;
		num = num/10;

		printf("suma = %d\n", suma);
		printf("num = %d\n\n", num);
	}
	printf("total = %d", suma);

	return 0;
}
