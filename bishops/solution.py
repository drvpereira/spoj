import sys
array = map(lambda x : str(max(1, int(x) * 2 - 2)),sys.stdin.readlines())
print('\n'.join(array))