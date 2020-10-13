
# a=input().split()
# def main(b):
#     print(b)
#     d={}
#     l='1,2,3,4,5,6,7,8,9'
#     for i in b:

#         # print(i)
#         for j in i:
#             # print(j)
#             if str(j) in l:
#                 # print(str(j))
#                 d1={int(j):i}
#                 d.update(d1)
#                 # d=sorted(d.keys())
#                 print(d)
#             else:
#                 pass
#     # d=sorted(d.keys())
#     # print(d)
#     for i in sorted(d.keys()):
#         print(d[i],end=' ')

#         # print()


# main(a)
# ---------------------------------
n=int(input("..."))
l=[[input("name"),float(input("marks"))] for i in range(n)]
print(l)
d={}
m=[]
for i in l:
    d1={i[0]:i[1]}
    d.update(d1)
print(d)
for i in sorted(d.values()):
    m.append(i)
print(m)

# for i in m:
#     print(d[i])
# print(d[0])
# a=m[1]
# print(a)
# print(d[a])