#include <math.h>

int main(void) {
	int l;
	double c = 1.0 / (2 * M_PI);

	while (scanf("%d", &l) && l != 0) {
		printf("%.2lf\n", l * l * c);
	}
	
	return 0;	
}