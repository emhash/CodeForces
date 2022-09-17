def solve(theset):
    new = sorted(theset)
    thelen = len(new)
    if thelen ==3:
        if (new[2] - new[1] == new[1] - new[0]):
            print(new[1] - new[0])
        else:
            print("-1")
    elif thelen ==2:
        if ((new[1]-new[0])%2==0 ):
            print(int(float(new[1]-new[0])/2))
        else:
            print(new[1]-new[0])
    elif(thelen>3):
        print("-1")
    elif (thelen==1):
        print("0")

n = int(input())
thedata = set(map(int , input().split()[:n]))
solve(thedata)