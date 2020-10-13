l1=[1,5,5]
l2=[4,5,6]
l3=l1+l2
print(l3)
#bubble sort
for i in range(0,len(l3)):
	for j in range(i):
		if(l3[j]>l3[j+1]):
			l3[j],l3[j+1]=l3[j+1],l3[j]
			break
print(l3)

#selection sort
for i in range(len(l3)):
	for j in range(i+1,len(l3)):
		if(l3[i]>l3[j]):
			l3[i],l3[j]=l3[j],l3[i]
print(l3)
for i in range(1,10):
	for j in range(i):
		print("*",end=' ')
	print("\n")
for i in range(9):
	print(i)
