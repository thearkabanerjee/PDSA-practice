l, r = map(int, input().split())

for i in range(l, r+1):
    if (i < r):
        print (i, end=" ")
    else:
        print(i)