orda = ord('a')

def dfs(node, visited):
	visited.append(node)
	
	for next in graph[node]:
		if not next in visited:
			dfs(next, visited)

for _ in range(int(input())):
	graph = {}
	orders = [ [0, 0] for _ in range(26) ]
	
	for _ in range(int(input())):
		w = input()
		
		fc = ord(w[0]) - orda
		lc = ord(w[-1]) - orda
		
		orders[fc][1] += 1
		orders[lc][0] += 1
		
		if not w[0] in graph:
			graph[w[0]] = []
		if not w[-1] in graph:
			graph[w[-1]] = []
			
		if not w[-1] in graph[w[0]]:
			graph[w[0]].append(w[-1])
		if not w[0] in graph[w[-1]]:
			graph[w[-1]].append(w[0])
	
	oid = 0
	iod = 0
	dio = 0
	for i in range(26):
		if orders[i][0] - orders[i][1] == 1:
			iod += 1
		elif orders[i][1] - orders[i][0] == 1:
			oid += 1
		elif orders[i][1] != orders[i][0]:
			dio += 1
	
	visited = []
	nodes = list(graph.keys())
	dfs(nodes[0], visited)
	
	result = iod <= 1 and oid <= 1 and dio == 0 and len(list(set(nodes) - set(visited))) == 0
	
	if result:
		print("Ordering is possible.")
	else:
		print("The door cannot be opened.")