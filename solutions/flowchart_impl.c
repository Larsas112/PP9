#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]) {
	int x = atoi(argv[1]);
	int result = 1;
	for (int i = 1; i <= x; i++) {
		if (i % 2 == 0)
	       		result = result + i;
		else
			result = result * i;
		if (result > 1000)
			result = result - 100;
	}
	printf("%d \n", result);
	return 0;
}

