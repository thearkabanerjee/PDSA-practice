a = int(input())
count = 0

for i in range(a):
    x = int(input())

    if (x != 0 and (18 % x == 0 or x % 45==0)):
        count += 1
    
print (count)


# fix mapping the numbers