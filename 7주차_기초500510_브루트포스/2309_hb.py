# 2309: 500 - 브루트 포스 - 일곱 난쟁이
arr = []
result = 0
find = False
for i in range(9):
    arr.append(int(input()))
for i in range(9):
    result = sum(arr) - arr[i]
    for j in range(9):
        if i == j:
            continue
        result -= arr[j]
        if result == 100:
            a, b = arr[i], arr[j]
            arr.remove(a)
            arr.remove(b)
            find = True
            break
        else:
            result += arr[j]
    if find == True:
        break
    result = 0
arr.sort()
for i in range(7):
    print(arr[i])