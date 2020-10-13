s=input()
w=int(input())
l=[]
for i in s:
	l.append(i)
print(l)
q=[]

for i in range(0,len(l),w):
	print("".join(l[i:w+i]))
	q.append("".join(l[i:w+i]))
print(q)

# a=[l[i:w+i] for i in range(0,len(l),w)]
print("\n".join([i for i in q]))
# print(a)