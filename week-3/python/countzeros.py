a = str(input())
count = 0


for i in range(len(a)):
    if (a[i] == "0"):
        count += 1

print (count)