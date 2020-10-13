n=int(input())
s={}
su=0
for i in range(n):
	name,*line=input().split()
	score=list(map(float,line))
	s[name]=score
q=input("name")
for i in s.keys():

	if(q==i):
		for j in s[i]:
			su=su+j

su=su/3.0
print("%.2f" %su)

