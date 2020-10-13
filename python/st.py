s=input().strip()
a=input().strip()
print(s)
print(a)
c=0
k=len(a)
for i in range(0,len(s)):
	if(s[i:i+k]==a):
		c=c+1
	else:
		pass
print(c)
