# from functools import reduce

# g=lambda x:x+x
# print(g(7))

# l=[1,2,3,4,5]
# li=list(filter(lambda x:(x%2!=0),l))
# print(li)

# li= list(map(lambda x:x+x,l))
# print(li)

# li=reduce((lambda x,y:x+y),l)
# print(li)
# l=[-1,-9]
# l1=[9,0,1]
# l2=[]
# l2=l1+l
# print(l2)
n = int(input())
arr =list(map(int, input().split()))
arr=list(set(sorted(arr)))
print(arr)
l=[]
m=[]
for i in arr:
    if (i<0):
        l.append(i)
    else:
        m.append(i)
arr=l+m
print(arr)
print(arr[-2])
           