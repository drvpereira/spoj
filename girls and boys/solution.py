from math import ceil

g, b = map(int, input().split())

while g != -1 and b != -1:
	print(ceil(max(g, b) / (min(g,b)+1)))
	g, b = map(int, input().split())