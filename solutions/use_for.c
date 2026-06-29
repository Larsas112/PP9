#include <stdio.h>

void count_up(int n) {
	int number = 1;
	for (number; number <= n; number++) {
		printf("%d ", number);
	}
	printf("\n");
}


int main(void) {
	count_up(10);
	return 0;
}


