#include <stdio.h>

int main(){

	int num, num2;

	printf("Enter the first number: ");
	scanf("%d", &num);
	printf("\n");
	
	printf("Enter the second number: ");
	scanf("%d", &num2);
	printf("\n");

	printf("num = %d\n", num);
	printf("num2 = %d\n", num2);
	
	num ^= num2;	// 01011010 ^ 10011001 = 11000011
	num2 ^= num;	// 11000011 ^ 10011001 = 01011010
	num ^= num2;	// 11000011 ^ 01011010 = 10011001
	
	printf("num = %d\n", num);
	printf("num2 = %d\n", num2);

	return 0;
}
