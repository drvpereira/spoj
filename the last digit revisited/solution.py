from math import ceil

cases = int(input())

while cases > 0:
	a, b = input().split()
	
	if (b == '0'):
		print(1)
	else:
		nb = int(b) % 4
		print(str(int(a) ** (nb, 4)[nb == 0])[-1])
		
	cases = cases - 1