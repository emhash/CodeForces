# Just use math tricks
#      DONE
'''
    follow the algo .
'''
n = int(input())
thelist = list(map(int, input().split()[:n]))
mx = max(thelist)
no1 = thelist.index(mx)
thelist.remove(mx)
thelist.insert(0 , mx)
mn = min(thelist)
imin = thelist.index(mn)
while True:
    matcher = thelist.count(mn)
    if matcher == 1:
        break
    thelist.remove(mn)
no2=((len(thelist)-1) - (thelist.index(mn)))
print(no1 + no2)