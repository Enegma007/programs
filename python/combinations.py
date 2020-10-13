from itertools import combinations
a,b=input().split()
b=int(b)
a=sorted(a)
# for i in a:
    # print(i)
for i in range(1,b+1):
	c=list(combinations(a,i))
	for i in c:
		for j in i:
			print(j,end="")
		print()

# c=list(combinations(a,b))
# for i in c:
#     for j in i:
#         print(j,end="")
#     print()
