import math
import collections
def fruits(visited,p,a,b,ans,i,curday,city):
    visited.add(i)
    for c in tree[i]:
        if c not in visited:
            b[c]=b[c]-min(a[city],b[c])
            if b[c]<=0 and dayth[c]==-1:
                dayth[c]=curday
            if city in tree[c]:
                tree[c].remove(city)
            fruits(visited,p,a,b,ans,c,curday,city)
    return dayth
    
    
test=int(input())
for i in range(test):
    n=int(input())
    tree=collections.defaultdict(lambda:set())
    for i in range(n-1):
        u,v=map(int,input().split())
        tree[u].add(v)
        tree[v].add(u)
    p=list(map(int,input().split()))
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    p.insert(0,0)
    a.insert(0,0)
    b.insert(0,0)
    dayth=[-1]*(n+1)
    for i in range(1,n+1):
        visited=set()
        curcity=p[i]
        b[curcity]=b[curcity]-min(a[curcity],b[curcity])
        if b[curcity]<=0 and dayth[curcity]==-1:
            dayth[curcity]=i
        dayth=fruits(visited,p,a,b,dayth,curcity,i,curcity)
        # del tree[curcity]
    print(*dayth[1:])
