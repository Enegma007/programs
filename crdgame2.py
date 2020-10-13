def power(x,y,p):
	r=1
	x%=p
	while(y>0):
		if y&1:
			r=(r*x)%p
		y=y>>1
		x=(x*x)%p
	return r

def ncr(n,r,p):
	num=den=1
	for i in range(r):
		num=(num*(n-i))%p
		den=(den*(i+1))%p
	return (num*power(den,p-2,p))%p

t=int(input())
while(t>0):
	t-=1
	n=int(input())
	arr=[]
	d={}
	arr=list(map(int,input().split()))
	val=0
	for i in arr:
		if i not in d:
			d[i]=1
		else:
			d[i]+=1
		val=max(val,i)
	mod=1000000007
	rsub=power(2,d[val],mod)
	if(d[val]%2==0):
		rsub-=ncr(d[val],d[val]>>1,mod)
	rsub%=mod
	ans=power(2,n-d[val],mod)*rsub%mod
	print(ans)
