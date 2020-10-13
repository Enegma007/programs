n=int(input(""))
l=[[input("name"),float(input("marks"))] for i in range(n)]
# a=[marks for name,marks in l]
second_highest=sorted(list(set([marks for name,marks in l])))[1]
print('\n'.join([a for a,b in sorted(l) if b == 
second_highest]))
 
# n=int(input("range"))
# l=[[input("name"),float(input("marks"))] for i in range(n)]
# l1=sorted(l,key=lambda x:x[1])
# print(l1)
# l2=[]
# for i in l1:
# 	l2.append(i)
# a=sorted(list(set([marks for name,marks in l2])))
# print(a)
# l3=[]
# for i in range(0,len(l1)):
# 	if(a[1]==l1[i][1]):
# 		l3.append(l1[i])
# 	else:
# 		pass
    


# l3=[]
# for i in range(len(l1)-1):
# 	if(l1[1][1]==l2[i][1]):
# 		l3.append(l1[1])
# 		l3.append(l2[i])
# 	else:
# 		pass
# print(l3)

try:
    if(l3!=[]):
	    l3=sorted(l3,key=lambda x:x[0])
	    print(l3[0][0])
	    print(l3[1][0])
    else:
	    print(l1[1][0])
except:
	pass





