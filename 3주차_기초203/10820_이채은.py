import sys

while True:
    line = sys.stdin.readline().rstrip('\n')
    
    if not line:
        break
    
    ans = [0] * 4
    for char in line:
        if char == ' ':
            ans[3] += 1
        elif char.islower():
            ans[0] += 1
        elif char.isupper():
            ans[1] += 1
        else:
            ans[2] += 1

    print('{} {} {} {}'.format(ans[0], ans[1], ans[2], ans[3]))
