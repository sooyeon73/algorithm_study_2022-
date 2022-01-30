import sys

queue = []
num = 0

def push(e):
    global num
    queue.append(e)
    num = num + 1

def pop():
    global num
    if num == 0:
        print(-1)
        return
    print(queue.pop(0))
    num = num - 1

def front():
    print(queue[0] if num != 0 else -1)
    
def back():
    print(queue[num-1] if num != 0 else -1)
    
def size():
    print(num)
    
def empty():
    print(1 if num == 0 else 0)

N = int(input())
for i in range (N):
    command = sys.stdin.readline().rstrip().split()
    if command[0] == "push":
        push(int(command[1]))
        
    elif command[0] == "pop":
        pop()
        
    elif command[0] == "front":
        front()
        
    elif command[0] == "back":
        back()
        
    elif command[0] == "size":
        size()
        
    elif command[0] == "empty":
        empty()
