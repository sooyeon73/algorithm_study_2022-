N = int(input())
arr = list(map(int, input().split()))

eratos = [False,False] + [True] * 999
prime = 0

for i in range(2, 1001):
  if eratos[i]:
    for j in range(2*i, 1001, i):
        eratos[j] = False
        
for num in arr:
    if eratos[num]:
        prime += 1
        
print(prime)
