#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char number[1000002];

void increment_at(int ln, int p) {
	int carry = 1, i;
	
	for (i = p; i > -1; i--) {
		number[i] = number[ln-i-1] = number[i] + carry;
		if (number[i] == ':') {
			number[i] = number[ln-i-1] = '0';
			carry = 1;
		} else {
			carry = 0;
		}
	}
}

bool last_part_is_smaller(int ln, int meio) {
	int i;
	
	for (i = meio; i >= 0; i--) {
		if (number[ln-i-1] > number[i])
			return false;
		if (number[ln-i-1] < number[i])
			return true;
	}
	
	return false;
}

bool sum_is_zero(int ln) {
	int sum = 0, i;
	
	for (i = 0; i < ln; i++) {
		sum += number[i] - '0';
	}
	
	return sum == 0;
}

void next_palindrome() {
	int ln = strlen(number);
	double meio = (ln - 1) * 1.0 / 2;
	int i = (int) meio, j;
	
	if (last_part_is_smaller(ln, i)) {
		for (j = 0; j < meio; j++) {
			number[ln-j-1] = number[j];
		}
	} else {
		increment_at(ln, i);
	}
	
	if (sum_is_zero(ln)) {
		number[0] = '1';
		number[ln] = '0';
		number[ln+1] = '\0';
		next_palindrome();
	}
}

int main(void) {
	int t;
	
	scanf("%d\n", &t);
	
	while(t-- > 0) {
		scanf("%s\n", number);
		next_palindrome();
		printf("%s\n", number);
	}
	
	return 0;
}
