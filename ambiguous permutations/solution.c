#include <stdio.h>
#include <stdbool.h>

int permutation[100001];

int main(void) {
	
	int n, i;
	bool amb;
	
	while(scanf("%d", &n) && n != 0) {
		
		for (i = 0; i < n; i++) {
			scanf("%d", &permutation[i]);
		}
		
		amb = true;
		for (i = 0; i < n; i++) {
			if (permutation[permutation[i] - 1] != i + 1) {
				amb = false;		
				break;
			}
		}
		
		printf("%s\n", amb ? "ambiguous" : "not ambiguous");
	}
	
	return 0;
}
