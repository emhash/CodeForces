def posiblily (usr):
    if (360 % (180 - usr) == 0):
        print("YES")
    else:
        print("NO")
times = int(input())
while (times > 0 ):
    usrinp = int(input())
    posiblily(usrinp)
    times -= 1
