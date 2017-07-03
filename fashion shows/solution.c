#include <stdio.h>

int   men[1001];
int women[1001];

void sort(int* array, int n) {
	int i, j, temp;
	for (i = 1; i < n; i++) {
		for (j = 0; j < i; j++) {
			if (array[j] > array[i]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

int main(void) {
	
	int t, n, i, h, sum;
	
	scanf("%d", &t);

	while(t-- > 0) {
		sum = 0;
		scanf("%d", &n);

		for(i = 0; i < n; i++) {
			scanf("%d", &h);
			men[i] = h;
		}
		
		for(i = 0; i < n; i++) {
			scanf("%d", &h);
			women[i] = h;
		}
		
		sort(men, n);
		sort(women, n);
		
		for(i = 0; i < n; i++) {
			sum += men[i] * women[i];
		}
		
		printf("%d\n", sum);
	}
	
	return 0;
}
