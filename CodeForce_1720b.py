def sums(lis):
    min1= min(lis)
    max1 = max(lis)
    lis.remove(min1)
    lis.remove(max1)
    min2 = min(lis)
    max2 = max(lis)
    print (max1+max2-min1-min2)   

n = int(input())
while(n>0):
    t = int(input())
    templist = list(map(int, input().split()[:t]))
    sums(templist)
    n -= 1