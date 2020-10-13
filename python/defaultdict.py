from collections import defaultdict
a,b=input().split()
a=int(a)
b=int(b)
l=[]
k=[]
q=[]
for i in range(a):
	e=input()
	l.append(e)
for i in range(b):
	t=input()
	k.append(t)

for i in k:
	for j in range(len(l)):
		if i in l:
			if(i==l[j]):
				q.append(j+1)
			else:
				pass
		if i not in l:
			q.append(-1)
	for i in q:
		print(i,end=" ")
	print()
	q.clear()
	# 	if(i==l[j]):
	# 		q.append(j)
	# 	else:
	# 		q.append(-1)
	# 	print(q,end=" ")
	# print()
	# q.clear()
