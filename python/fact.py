a=int(input("enter first range"))
b=int(input("enter second range"))
print(a,"\n",b)
for i in range(a,b+1):
	f=1
	for j in range(1,i+1):
		f=f*j
	print("factorial of",i,"is",f)



