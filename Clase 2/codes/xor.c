#include <stdio.h>

int main(){
	
	int a = 10, b = 20, aux;

	printf("a = %d\tb = %d\n", a, b);

	aux = a;
	a = b;
	b = aux;

	printf("a = %d\tb = %d\n", a, b);

	a ^= b;		/* a = 1001, b = 1010 | a => 0011 */
	b ^= a;		/* b = 1001 */
	a ^= b;		/* a =  */

	printf("a = %d\tb = %d\n", a, b);

	return 0;
}
