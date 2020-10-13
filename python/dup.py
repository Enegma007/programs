l=[1,6,2,2,1,6,5,6,3]
# print(l)
# l1=[]
# for i in l:
# 	if i not in l1:
# 		l1.append(i)
# print(l1)
#bubble
for i in range(0,9):
	for j in range(0,9-i):
		if(l[j]==l[j+1]):
			l.pop(j)
print(l)

