from math import floor

def increment_at(n, ln, p):
	carry = 1

	for i in range(p, -1, -1):
		n[i] = n[ln-i-1] = n[i] + carry
		if n[i] == 10:
			n[i] = n[ln-i-1] = 0
			carry = 1
		else:
			carry = 0

def last_part_is_smaller(n):
	ln = len(n)
	meio = int((ln-1) / 2)
	i = meio
	while i >= 0:
		if n[ln-1-i] > n[i]:
			return False
		if n[ln-1-i] < n[i]:
			return True
		i -= 1
	return False
	
def next_palindrome(n):
	ln = len(n)
	meio = (ln-1) / 2
	i = int(meio)
	
	if (last_part_is_smaller(n)):
		j = 0
		while j < meio:
			n[ln-1-j] = n[j]
			j += 1
	else:
		increment_at(n, ln, i)
	
	if sum(n) == 0:
		n = next_palindrome([1] + n)
		
	return ''.join(map(str,n))

for _ in range(int(input())):
	n = [ v for v in map(int, list(input())) ]
	print(next_palindrome(n))