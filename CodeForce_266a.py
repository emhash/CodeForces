# 266A

num = int(input())
thestring = str(input())
l=(list(thestring))
l=(list(zip(l, l[1:])))
cnt = 0
for item in l :
    if item[0] == item[1] :
        cnt+=1
    else:
        pass
print(cnt)