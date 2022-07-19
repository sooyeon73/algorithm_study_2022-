# 1920: 수 찾기
from sys import stdin, stdout
n = stdin.readline()
N = set(stdin.readline().split())
m = stdin.readline()
M = stdin.readline().split()

for l in M:
    stdout.write('1\n') if l in N else stdout.write('0\n')
'''
n = int(input())
A = set(input().split())
m = int(input())
B = set(input().split())
print(B)
for i in B:
    if i in A:
        print(1)
    else:
        print(0)
'''