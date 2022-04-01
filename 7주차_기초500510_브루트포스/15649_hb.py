# 15649: 510 - 브루트 포스 (N과 M) - N과 M (1)
n, m = map(int, input().split())
num = [0]*8
check = [False]*9
def backtracking(cnt): # cnt: 수열의 인덱스
    if cnt == m: # 기저 조건 - 수열의 길이가 m이 되었을 때
        for i in range(cnt): # 출력 후 종료
            print(num[i], end=' ')
        print()
        return
    for i in range(1, n+1):
        if not check[i]: # 현재 수열에 해당 수가 없을 경우
            num[cnt] = i # 수열에 값 저장
            check[i] = True # 수 사용했다고 체크
            backtracking(cnt + 1) # 다음 수열 인덱스 호출
            check[i] = False # 체크 리스트 원래 상태로 돌려놓음
backtracking(0) # 수열의 0번 인덱스부터 백트래킹