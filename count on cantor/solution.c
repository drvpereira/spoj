#include <stdio.h>

void cantor(long long term) {
	long long index = 1;
	
	int num = 1, den = 1;
	int max_num = 1, max_den = 2;
	int inc_num = 1, inc_den = 1;

	while(++index <= term) {
		if (num == max_num) {
			max_num += 2;
			inc_num = -1;
		} 
		
		num += inc_num;
		
		if (num == 0) {
			num = 1;
			inc_num = 1;
		}

		if (den == max_den) {
			max_den += 2;
			inc_den = -1;
		} 
		
		den += inc_den;
		
		if (den == 0) {
			den = 1;
			inc_den = 1;
		}
	}
	
	printf("TERM %lld IS %d/%d\n", index-1, num, den);
}

int main(void) {

	int instances;
	long long term;	
	
	scanf("%d\n", &instances);
	
	while(instances-->0) {
		scanf("%lld\n", &term);
		cantor(term);	
	}
	
	return 0;
}
