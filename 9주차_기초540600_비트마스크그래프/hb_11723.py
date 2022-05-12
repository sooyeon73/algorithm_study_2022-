# 11723: 540 - 브루트 포스 - 비트마스크 - 집합
import sys
m = int(sys.stdin.readline())
S = 0
for i in range(m):
    command = sys.stdin.readline().split()
    if command[0] == 'all':
        S = (1<<20) - 1
    elif command[0] == 'empty':
        S = 0
    else:
        op = command[0]
        value = int(command[1]) - 1
        if op == 'add':
            S |= (1<<value)
        elif op == 'remove':
            S &= ~(1<<value)
        elif op == 'check':
            if S & (1<<value):
                print(1)
            else:
                print(0)
        elif op == 'toggle':
            S = S ^ (1<<value)