from queue import Queue

n = int(input())
graph = [ [] for i in range(n) ]
visited = [False] * n

for i in range(n-1):
	u, v = map(int, input().split())
	graph[v-1].append(u-1)
	graph[u-1].append(v-1)
	
def bfs(label):
	q = Queue()
	q.put( (label, 0) )
	visited[label] = True

	while not q.empty():
		node = q.get()
		for i in graph[node[0]]:
			if not visited[i]:
				q.put((i, node[1]+1))
				visited[i] = True
	return node
		
node = bfs(0)
visited = [False] * n
node = bfs(node[0])
print(node[1])