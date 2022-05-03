# 10972: 520 - 브루트 포스 - 순열 - 다음 순열
n = int(input())
arr = list(map(int, input().split()))
find = False
for i in range(n-1, 0, -1):
    if arr[i-1] < arr[i]:
        for j in range(n-1, 0, -1):
            if arr[i-1] < arr[j]:
                arr[i-1], arr[j] = arr[j], arr[i-1] # swap
                arr = arr[:i] + sorted(arr[i:]) # i-1까지는 swap한 대로, i부터는 오름차순 sort
                find = True
                break
    if find == True:
        print(*arr) # 리스트 앞에 *를 붙이면 안에 있는 숫자들을 1 2 3 4 이런 식으로 출력할 수 있음
        break
if not find:
    print(-1)