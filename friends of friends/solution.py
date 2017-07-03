friends = {}

for _ in range(int(input())):
	fp = list(map(int, input().split()))
	friends.update({ fp[0] : fp[2:] })

fofs = set()
for f in friends:
	fofs |= { i for i in friends[f] if i not in friends.keys() }
	
print(len(fofs))