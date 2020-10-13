a=input().split()
def main(b):
    print(b)
    d={}
    l='1,2,3,4,5,6,7,8,9'
    for i in b:

        # print(i)
        for j in i:
            # print(j)
            if str(j) in l:
                # print(str(j))
                d1={int(j):i}
                d.update(d1)
                # d=sorted(d.keys())
                print(d)
            else:
                pass
    # d=sorted(d.keys())
    # print(d)
    for i in sorted(d.keys()):
        print(d[i],end=' ')

        # print()


main("")