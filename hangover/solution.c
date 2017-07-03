#include <stdio.h>

int main(void) {
	double c;
	
	while(scanf("%lf\n", &c) && c != 0.0) {
		int i = 1;
		double sum = 0.0;
		while(sum <= c) {
			sum += 1.0 / ++i;
		}
		
		printf("%d card(s)\n", i - 1);
	}
	
	return 0;
}
