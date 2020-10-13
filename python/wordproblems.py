l=[]
for i in range(int(input())):
	s=input()
	l.append(s)
# print(l)
c=0
k=[]
for i in l:
	for j in range(len(l)):
		if(i==l[j]):
			c=c+1
		else:
			pass
	k.append(c)
	c=0
d={}

for i in range(len(l)):
	d.update({l[i]:k[i]})

# print(d)
# print(k,end="")
for i in d.values():
	print(i,end=" ")