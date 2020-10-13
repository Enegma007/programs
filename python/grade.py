

# def gradingStudents(grades):
#     # Write your code here
    
#     l=[]
#     for i in l:
#         for j in range(i,i+6):
#             if(j%5==0):
#                 if(j-i<3):
#                     l.append(j)
#                 else:
#                     l.append(i)
#                     print(l)
    
#     print(l)


    
grades=[73,67,38,33]
# gradingStudents(grades)
l=[]
for i in grades:
    for j in (i,i+6):
        if(j%5==0):
            if(j-i<3):
                l.append(j)
            else:
                l.append(i)

print(l)


