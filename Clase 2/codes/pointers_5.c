#include <stdio.h>

int main(){
	
	int arr[5] = {5, 10, 15, 20, 25};
	int i, *p;
	p = arr;

	for(i = 0; i < 5; i++){
		printf("Address of arr[%d] = %u %u %u %u\n", i, &arr[i], arr + i, p + i, &p[i]);
		printf("Value of arr[%d] = %u %u %u %u\n", i, arr[i], *(arr + i), *(p + i), p[i]);
	}

	return 0;
}
