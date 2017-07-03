#include <stdio.h>

int main(void) {
	
	int t;
	
	scanf("%d\n", &t);
	
	while(t-- > 0) {
		long long i, x, y, s, n, k, a;
		
		scanf("%lld %lld %lld\n", &x, &y, &s);
		
		n = s * 2 / (x + y);
		k = (y - x) / (n - 5);
		a = x - 2 * k;
		
		printf("%lld\n", n);
		for (i = 0; i < n; i++) {
			printf("%lld ", a + (i * k));
		}
		
		printf("\n");
	}
	
	return 0;
}
