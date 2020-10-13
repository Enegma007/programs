s=input()
l=[]
for i in s:
	if(ord(i)>=97 and ord(i)<=122):
		
		l.append(i.upper())
		
	elif(ord(i)>=65 and ord(i)<=90):
		l.append(i.lower())

	elif(i==" "):
		l.append(" ")
	else:
		l.append(i)

a="".join(l)
print(a)



# for i in l:
# 	print(i,end="")

