#   432A

n , x = map(int , input().split())
thelist = list(map(int, input().split()[:n]))
# print(thelist)
c=0
for item in thelist:
    # print(item)
    if (5- item) >=x:
        c +=1
print(int(c/3))
