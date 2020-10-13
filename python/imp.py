r = int(input("Enter row"))
c = int(input("Enter column"))
l1=[]
l=[[i for i in range(1,r+1)]for i in range(1,c+1)]
print(l[0][1])
count=0
r1=int(input("initial row position"))
c1=int(input("intial column position"))
print(r1,c1)
r2=int(input("final row position"))
c2=int(input("final column position"))
print(r2,c2)
if(c1==c2 and r2>r1):
    
