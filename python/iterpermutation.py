from itertools import permutations
a,b=input().split()
b=int(b)
a=sorted(a)
c=list(permutations(a,b))
for i in c:
    for j in i:
        print(j,end="")
    print()