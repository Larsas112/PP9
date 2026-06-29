#include <stdio.h>
#include <stdlib.h>

const char* sign_off(int x) {
	if (x > 0)
		printf("positive");
	else if (x == 0)
		printf("zero");
	else 
		printf("negative");
}

int main(int argc, char *argv[]) {
	int x = atoi(argv[1]);
	sign_off(x);
	return 0;
}


