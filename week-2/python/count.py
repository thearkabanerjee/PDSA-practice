times = int(input())

nums = list(map(int, input().split()))

positive, negative, odd, even = 0, 0, 0, 0

for a in nums:
    if a > 0:
        positive += 1
    elif a < 0:
        negative += 1

    if a % 2 == 0:
        even += 1
    else:
        odd += 1
    
print (positive)
print (negative)
print (even)
print (odd)