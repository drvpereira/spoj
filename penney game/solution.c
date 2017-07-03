#include <stdio.h>

char tosses[41];
char count[8];

int main(void) {
	int instances, dataset, i;
	
	scanf("%d\n", &instances);
	
	while(instances-- > 0) {
		scanf("%d\n%s\n", &dataset, tosses);
		memset(count, 0, 8);
		
		for (i = 2; i < 40; i++) {
			int index = (tosses[i-2] == 'H' ? 4 : 0) + (tosses[i-1] == 'H' ? 2 : 0) + (tosses[i] == 'H' ? 1 : 0);
			count[index]++;
		}
		
		printf("%d ", dataset);
		for (i = 0; i < 8; i++) {
			printf("%d", count[i]);
			if (i < 7) printf(" ");
		}
		printf("\n");
		
	}
}
