n = int(input())
while n != 0:
	s = input()
	m = []
	
	for idx, val in enumerate(range(0, len(s), n)):
		if idx % 2 == 0:
			m.append(s[val : val+n])
		else:
			m.append(s[val+n-1 : val-1 : -1])

	msg = ''
	for i in range(n):
		for row in m:
			msg += row[i]

	print(msg)		
	n = int(input())	
