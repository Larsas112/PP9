#include <stdio.h>

const char* weekday(int d) {
	switch(d) {
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4: 
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
	}
}

int main () {
	int d = 1;
	for (d; d<=7; d++) {
		weekday(d);
	}
	return 0;
}
