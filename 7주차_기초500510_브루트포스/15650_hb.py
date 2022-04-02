# 15650: 510 - 브루트 포스 (N과 M) - N과 M (2)
n, m = map(int, input().split())
num = [0]*8
check = [False]*9
def backtracking(cnt, start): # cnt: 수열의 인덱스 start: 오름차순 구현을 위한 숫자 저장
    if cnt == m: # 기저 조건 - 수열의 길이가 m이 되었을 때
        for i in range(cnt): # 출력 후 종료
            print(num[i], end=' ')
        print()
        return
    for i in range(start, n+1): # 직전 인덱스에서 사용한 숫자의 다음 숫자부터 탐색
        num[cnt] = i
        backtracking(cnt+1, i+1) # 수열의 인덱스+1, 탐색 시작할 숫자+1
backtracking(0, 1) # 수열의 0번 인덱스부터 백트래킹