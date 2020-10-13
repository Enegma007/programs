s=input()
k=int(input())
n=len(s)
a=n//k
l=[]
for i in range(0,len(s),a):
	l.append(s[i:a+i])
t=[]
for i in l:
	for j in i:
		if j not in t:
			t.append(j)
		else:
			pass
	for g in t:
		print(g,end='')
	t.clear()
	print()
		