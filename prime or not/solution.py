from random import randint

num_trials = 10

def is_prime(p):
	prime = True
	for _ in range(num_trials):
		a = randint(1, p-1)
		prime &= pow(a, p-1, p) == 1
	return prime

for _ in range(int(input())):
	print("YES" if is_prime(int(input())) else "NO")