#include <stdio.h>

int main(void) {
	long long n;
	scanf("%lld", &n);
	
	printf("%s\n", n & (n-1) ? "NIE" : "TAK");
		
	return 0;
}
