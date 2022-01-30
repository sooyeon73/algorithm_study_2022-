inp=input()
re=''
w=''
c=0
for i in inp:
    if c==0:
        if i=='<':
            c=-1
            w+=i
        elif i==' ':
            re+=w+i
            w=''
        else:
            w=i+w
    elif c==-1:
        w+=i
        if i=='>':
            c=0
            re+=w
            w=''
print(re+w)
