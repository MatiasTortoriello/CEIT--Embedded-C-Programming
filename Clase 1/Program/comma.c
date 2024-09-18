#include <stdio.h>

int main(){
	int sum, a, b;
	sum = (a = 3, b = 2 * a, a + b);
	printf("sum = %d\n", sum);

	return 0;
}
