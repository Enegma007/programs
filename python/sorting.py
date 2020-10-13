n=int(input("Limit of list"))
l=[]
for i in range(n):
	i=int(input("Input the values"))
	l.append(i)
print(l)
#bubble sorting
for i in range(len(l)-1):
	for j in range(len(l)-i):
		if(l[j]>l[j+1]):
			l[j],l[j+1]=l[j+1],l[j]
			break
print(l)
#selection sort
for i in range(len(l)):
	for j in range(i+1,len(l)):
		if(l[i]>l[j]):
			l[i],l[j]=l[j],l[i]
			break
print(l)
