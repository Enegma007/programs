st=list(input("enter a string"))
# list(st)
# st.upper()
l=[]
l1=[]
l2=[]
l3=[]
l4=[]
l5=[]
for i in st:
	try:
		l.append(int(i))
	except:
		l1.append(i)

for i in l1:
	if (i==i.upper()):
		l2.append(i)
	else:
		l3.append(i)

for i in l:
	if(i%2!=0):
		l4.append(str(i))
	else:
		l5.append(str(i))



print(l3+l2+l4+l5)
l6=l3+l2+l4+l5
print("".join(l6))
	# if(i==i.lower()):
	# 	l.append(i)
	# elif(i==i.upper()):
	# 	l1.append(i)
# print(l+l1)




