grades=[73,67,38,33]
l=[]
for i in grades:
	print(i)
    for j in (i,i+6,1):
        if(j%5==0):
            if(j-i<3):
                l.append(j)
            else:
                l.append(i)

print(l)