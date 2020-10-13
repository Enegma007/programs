s=input()
a=[]
b=[]
c=[]
d=[]
e=[]

for i in s:
	a.append(i.isalnum())
	b.append(i.isalpha())
	c.append(i.isdigit())
	d.append(i.islower())
	e.append(i.isupper())

print(any(a))
print(any(b))
print(any(c))	
print(any(d))
print(any(e))
		