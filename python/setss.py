n = int(input())
s = set(map(int, input().split()))
c=int(input())
for i in range(c):
    a=input().split()
    if(a[0]=='pop'):
        s.pop()
    elif(a[0]=='remove'):
        s.remove(int(a[1]))
    elif(a[0]=='discard'):
        s.discard(int(a[1]))
    else:
        pass

print(s)
print(sum(s))
