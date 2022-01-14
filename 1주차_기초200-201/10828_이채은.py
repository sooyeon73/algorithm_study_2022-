import sys

stack = []
length = 0

def push(e):
    global length
    stack.append(int(e))
    length += 1

def pop():
    global length
    if length == 0:
        print(-1)
        return
    print(stack.pop())
    length -= 1

def size():
    print(length)
    
def empty():
    print("1" if length == 0 else "0")

def top():
    print("-1" if length == 0 else stack[length-1])

N = int(input())
for i in range(N):
    command = sys.stdin.readline().split()
    if(command[0] == "push"):
        push(command[1])
    elif(command[0] == "top"):
        top()
    elif(command[0] == "size"):
        size()
    elif(command[0] == "empty"):
        empty()
    else:
        pop()
