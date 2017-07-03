#include <stdio.h>
#include <math.h>

char bee(long long n) {
	if ((n - 1) % 6 == 0) {
		double k = (1 + sqrt(1 + 8*((n - 1) / 6))) / 2;
		if (k == (int) k)
			return 'Y';
	}
	
	return 'N';
}

int main(void) {
	
	long long n;
	
	while(scanf("%lld\n", &n) && n != -1) {
		printf("%c\n", bee(n));
	}
	
	return 0;
}
