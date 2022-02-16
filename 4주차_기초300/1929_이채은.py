M, N = map(int, input().split())
eratos = [False, False] + [True] * (N + 1)
for i in range(2, N+1):
    if not eratos[i]:
        continue
    j = 2
    while i * j <= N:
        eratos[i * j] = False
        j += 1
        
for i in range(M, N+1):
    if eratos[i]:
        print(i)
