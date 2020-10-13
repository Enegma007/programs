# import base64

# s='z0m31en7'
# d=base64.b64decode(s)
# print(d)
# x=int(input(""))
# y=int(input(""))
# z=int(input(""))
# n=int(input(""))
# print([[i,j,k] for i in range(x+1) for j in range(y+1) for k in range(z+1) if((i+j+k)!=n)])


n = int(input(""))
arr = list(map(int, input().split()))
print(arr)
l=[]
m=[]
for i in arr:
	if(i<0):
		l.append(i)
	else:
		m.append(i)
# m=m.sort()
# arr=m+l
# print(arr)
# print(l,sorted(m))
m=sorted(m)
arr=m+l
print(arr)

