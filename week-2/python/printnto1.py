a = int(input())

# while (a > 0):
#     print (a)
#     a = a-1

for i in range (a, 0, -1):
    if (i > 1):
        print (i, end=" ")
    else:
        print (i)
    a = a-1