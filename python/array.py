n,m=input().split()
n=int(n)
m=int(m)
# e=input().split()
e=list(map(int,input().split()))
a=set(map(int,input().split()))
b=set(map(int,input().split()))
h=0
print(e)
print(a)
print(b)
for i in e:
	if i in a:
		h=h+1
	else:
		if i in b:
			h=h-1
		else:
			pass
print(h)
