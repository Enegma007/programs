s=input()
a=s.split()
l=[]
for i in s:
    l.append(i)
# print(l)
l[0]=l[0].capitalize()
for i in range(len(l)):
    if(l[i]==" "):
        l[i+1]=l[i+1].capitalize()
# print(c)    

# for i in l:
    # print(i,end="")
print("".join(l))
# ----------------------------------------\
# a=s.split()
#     l=[]
#     for i in a:
#        l.append([i])
#     for i in l:
#         i[0]=i[0].capitalize()
#     k=[]
#     for i in l:
#         for j in i:
#             k.append(j)
#     c=" ".join(k)