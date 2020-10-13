# #!/bin/python3

# import math
# import os
# import random
# import re
# import sys

# #
# # Complete the 'diagonalDifference' function below.
# #
# # The function is expected to return an INTEGER.
# # The function accepts 2D_INTEGER_ARRAY arr as parameter.
# #

# def diagonalDifference(arr,n):
#     su=0
#     au=0
#     # Write your code here
#     for i in range(n):
#         for j in range(0,n):
#             if(i==j):
#                 # print(arr[i][j])
#                 su=su+arr[i][j]
#     # print(su)
#     for i in range():
#         for j in range(n-1,1,-1):
#             if(i==j):
#                 # print(arr[i][j])
#                 print(i)
#                 print(j)
    
#                 au=au+arr[i][j]
#     # print(au)
          
#     diff=abs(su-au)
#     return diff


# # if __name__ == '__main__':
#     # fptr = open(os.environ['OUTPUT_PATH'], 'w')

# n = int(input().strip())

# arr = []

# for i in range(n):
#     arr.append(list(map(int, input().rstrip().split())))

# result = diagonalDifference(arr,n)
# print(result)

#     # fptr.write(str(result) + '\n')

#     # fptr.close()
n=9
for i in n:
    print(i)