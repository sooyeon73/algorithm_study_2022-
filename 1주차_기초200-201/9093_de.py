count=int(input())
re=""
for i in range(count):
    li = input().split(" ")
    for j in li:
        re+=j[::-1]+" "
    re+="\n"
print(re)
