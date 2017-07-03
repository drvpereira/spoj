import operator

operators = { '+': operator.add, '-': operator.sub, '*': operator.mul, '/': operator.floordiv }

n = int(input())

for i in range(2*n):
	number = 0
	operation = ''
	
	ops = input().split()

	if ops:
		for op in ops:
			if op in ['+', '-', '*', '/']:
				operation = operators[op]
			elif op != '=':
				r = int(op)
				if operation:
					r = operation(number, r)
				number = r

		print(number)
