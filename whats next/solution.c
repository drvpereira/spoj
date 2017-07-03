#include <stdio.h>

int main(void) {
	
	double a1, a2, a3;
	
	while(scanf("%lf %lf %lf\n", &a1, &a2, &a3) && !( (a1 == a2) && (a2 == a3) && (a3 == 0) )) {
		if ((a2 - a1) == (a3 - a2)) {
			printf("AP %g\n", (a3 - a2) + a3);
		} else {
			printf("GP %g\n", (a3 / a2) * a3);
		}
	}
	
	return 0;
}
