#include <stdio.h>

int packages[10001];

int main(void) {
	
	int n, c, i, sum, moves;
	
	while(scanf("%d\n", &n) && n != -1) {
		sum = 0;
		
		for (i = 0; i < n; i++) {
			scanf("%d\n", &c);
			packages[i] = c;
			sum += c;
		}
		
		if (sum % n != 0) {
			printf("-1\n");
		} else {
			moves = 0;
			sum /= n;
			
			for (i = 0; i < n; i++) {
				if (packages[i] < sum)
					moves += sum - packages[i];
			}
			
			printf("%d\n", moves);
		}
		
	}
	
	return 0;
}
