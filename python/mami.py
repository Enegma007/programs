# ar=list(map(int,input().split()))
# l=[]
# a=0
# su=0
# for i in range(len(ar)):
# 	for j in range(len(ar)):
# 		if(i==j):
# 			continue
# 		else:
# 			su=su+ar[j]
# 	l.append(su)
# 	su=0

# print(l)


s=input()
l=s.split(":")
# l=[]
a=0
for i in l[len(l)-1]:
	if(i=='p' or i=='P'):
		a=1
	elif(i=='a' or i=='A'):
		a=0

if(a==1):
	l[0]=int(l[0])
	l[0]=l[0]+12
elif(a==0):
	pass
print("")

# for i in s:
# 	l.append(i)
# for i in range(len(l)):
# 	try:
# 		l[i]=int(l[i])
# 	except:
# 		pass



print(l)



