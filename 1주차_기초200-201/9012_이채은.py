import sys

T = int(input())
for i in range (T):
    isVPS = True
    stack = []
    arr = list(sys.stdin.readline().rstrip())
    for j in range (len(arr)):
        if arr[j] == "(":
            stack.append(arr[j])
        elif len(stack) == 0:
            isVPS = False
            break
        else:
            stack.pop()
    if len(stack) != 0:
        isVPS = False
    print("YES" if isVPS else "NO")
