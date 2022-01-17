import sys

deque = []
N = int(input())
for i in range(N):
    cmd = sys.stdin.readline().rstrip().split()
    if cmd[0] == "push_front":
        deque.insert(0, int(cmd[1]))
        
    elif cmd[0] == "push_back":
        deque.append(int(cmd[1]))
    
    elif cmd[0] == "pop_front":
        print(deque.pop(0) if len(deque) != 0 else -1)
        
    elif cmd[0] == "pop_back":
        print(deque.pop(-1) if len(deque) != 0 else -1)
        
    elif cmd[0] == "size":
        print(len(deque))
        
    elif cmd[0] == "empty":
        print(0 if len(deque) != 0 else 1)
        
    elif cmd[0] == "front":
        print(deque[0] if len(deque)!=0 else -1)
        
    else:
        print(deque[-1] if len(deque)!=0 else -1)
        
