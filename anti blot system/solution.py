for _ in range(int(input())):
	input()
	numbers = input().split()

	if 'machula' in numbers[0]:
		print(int(numbers[4]) - int(numbers[2]), "+", numbers[2], "=", numbers[4])
	elif 'machula' in numbers[2]:
		print(numbers[0], "+", int(numbers[4]) - int(numbers[0]), "=", numbers[4])
	else:
		print(numbers[0], "+", numbers[2], "=", int(numbers[0]) + int(numbers[2]))