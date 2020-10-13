s=input()
l=[]
for i in s:
	l.append(i)
s=s.split(":")
print(s)
print(l)
a=[]
for i in s[len(s)-1]:
	if(i=='P' or i=='A'):
		break
	a.append(i)
print(a)
del s[len(s)-1]
s.append("".join(a))
print(s)
for i in l:
	if(i=='P'):
		try:
			s[0]=int(s[0])
			if(s[0]<12):
				s[0]=s[0]+12
			else:
				pass
			s[0]=str(s[0])
		except:
			pass
	elif(i=='A'):
		try:
			# s[0]=int(s[0])
			if(s[0]=='12'):
				s[0]='00'

			else:
				s[0]=str(s[0])
		except:
			pass

print(s)
print(":".join(s))