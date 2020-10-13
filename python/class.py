class powtwo:
	"""class to implement the power of two"""
	def __init__(self,max):
		self.max=max

	def __iter__(self):
		self.n=0
		return self

	def __next__(self):
		if self.n<=self.max:
			r=2**self.n
			self.n+=1
			return r
		else:
			raise StopIteration

a=powtwo(4)
i=iter(a)

print(next(i))
print(next(i))
print(next(i))


