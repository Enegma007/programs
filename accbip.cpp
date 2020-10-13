import math
import heapq
import collections
def factorial(num):
    p = [True] * (num + 1)
        ans = 1
              for i in range(2, num + 1) :
          if p[i]:
                      j = i + i
              while j <= num:
                          p[j] = False
                                     j = j + i
                                         sume = 0
                                                tim = i
                                      while tim <= num:
                                                      sume += num //tim
                                                              tim *= i
                                                                      ans *= i * * sume
                                                                              return ans


                                                                                      t = int(input())
                                                                                                  for i in range(t) :
                                                                                                      n, C, k = map(int, input().split())
                                                                                                              arr = []
                                                                                                                      for i in range(n) :
                                                                                                                          temp = list(map(int, input().split()))
                                                                                                                                  arr.append(temp)
                                                                                                                                  v = list(map(int, input().split()))
                                                                                                                                          res = [0 for i in range(C)]
                                                                                                                                                  res.insert(0, 0)
                                                                                                                                                  heap = []
                                                                                                                              for a, b, c in arr :
                                                                                                                                                          res[c] += 1
                                                                                                                                                                      norm = k //v[0]
                                                                                                                                                                              heap = []
                                                                                                                                                                                      notr = 0
                                                                                                                                                                                              for i in range(1, len(res)) :
                                                                                                                                                                                                  heapq.heappush(heap, -res[i])
                                                                                                                                                              while heap and norm:
                                                                                                                                                                                                  num = heapq.heappop(heap)
                                                                                                                                                                                                              num = -num
                                                                                                                                                                                                                      num -= 1
                                                                                                                                                                                                                              norm -= 1
                                                                                                                                                                                              if num >= 3:
                                                                                                                                                                                                                                      heapq.heappush(heap, -num)

                                                                                                                                                                                              for i in heap :
                                                                                                                                                                                                                                          i = -i

                                                                                                                                                                                                                                                  notr += factorial(i) //(factorial(i-3)*factorial(3)) if i>2 else 0
                                                                                                                                                                                                                                                              print(notr)