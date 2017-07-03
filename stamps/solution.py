def stamps(ts):
	total = 0
	for idx, val in enumerate(fa):
		total += val
		if total >= ts:
			return idx+1
	return 0


for t in range(int(input())):
	ts, nf = map(int, input().split())
	fa = sorted(map(int, input().split()), reverse=True)

	print("Scenario #{}:".format(t+1))
	f = stamps(ts)
	print(f if f > 0 else "impossible")
	print()