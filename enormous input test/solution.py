import sys
n, k = map(int, sys.stdin.readline().split())
print(sum(i % k == 0 for i in map(int, sys.stdin.readlines())))