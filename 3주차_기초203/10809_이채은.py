S = list(input())
arr = [-1]*26
for i in range(len(S)):
    c = S[i]
    if arr[ord(c)-ord('a')] == -1:
        arr[ord(c)-ord('a')] = i

for i in range(26):
    print(arr[i], end=' ')
