from math import pi

c = 1.0 / (2 * pi)
l = int(input())

while l != 0:
	print('{0:.2f}'.format(l * l * c))
	l = int(input())