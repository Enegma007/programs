from itertools import combinations_with_replacement
a,b=input().split()
b=int(b)
a=sorted(a)
c=list(combinations_with_replacement(a,b))
for i in c:
    for j in i:
        print(j,end="")
    print()

