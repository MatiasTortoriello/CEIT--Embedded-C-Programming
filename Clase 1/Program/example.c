#include <stdio.h>

int main(){

	int a = -3;

	a = a-- * a--;
	printf("a = %d\n", a);
	return 0;
}
