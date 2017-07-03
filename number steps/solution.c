#include <stdio.h>

int main(void) {	
	int instances, x, y;

	scanf("%d\n", &instances);
	
	while (instances-- > 0) {
		scanf("%d %d\n", &x, &y);
		
		if (x != y && x != y + 2) {
			printf("No Number\n");
		} else {
			printf("%d\n", x + y - (x % 2));
		}
	}

	return 0;
}

