import sys

T = int(input())
for i in range (T):
    word = sys.stdin.readline().rstrip().split()
    sentence = []
    for w in word:
        sentence.append(w[::-1])
        sentence.append(" ")
    print(''.join(sentence))
