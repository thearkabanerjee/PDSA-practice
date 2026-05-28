n = int(input())

for i in range(1, n+1):
    if (i % 2 == 0):
        if (i < n):
            print (i, end= " ")
        else:
            print (i)