# this is the thing i need to do
#
#
#
a = int(input())

factors = []

for i in range(1,a+1):
    if (a % i == 0):
        factors.append(i)


print (factors)
