from itertools import product
l=list(map(int,input().split()))
k=list(map(int,input().split()))
j=list(product(l,k))
for i in j:
    print(i,end=" ")
