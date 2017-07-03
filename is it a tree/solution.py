n, e = map(int, input().split())
graph = [ [] for i in range(n) ]
visited = [0] * n

for i in range(e):
	u, v = map(int, input().split())
	graph[u-1].append(v-1)
	graph[v-1].append(u-1)

def dfs(n):
	visited[n] += 1
	if visited[n] == 1:
		for v in graph[n]:
			dfs(v)

def is_tree():
	dfs(0)

	condition1 = e == n-1
	condition2 = len(list(filter(lambda x : x > 1, visited))) > 0
	condition3 = len(list(filter(lambda x : x == 0, visited))) == 0
	return condition1 and condition2 and condition3


if is_tree():
	print("YES")
else:
	print("NO")
