n = int(input("Enter a value"))
p=n
c=True
# if(n>1):
# 	for i in range(2,n//2):
# 		if(n%i==0):
# 			c=False
# 		else:
# 			c=True
# else:
# 	c=False
# print(c)
# if c is False:
# 	# print("hello")


# else:

def prime(a):
    k=(a-1)/4
    j = 4*k+1
    j,k=int(j),int(k)
    # print(j,k)
    if a%2==0:
        return False
    else:
        if(a==j):
	        
	        return True
        else:
	        
	        return False
print(prime(n))
