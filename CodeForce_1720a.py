def solution():
    usrIn = list(map(int , input().split()[:4]))
    x= usrIn[0] * usrIn[3]
    y= usrIn[1] * usrIn[2]
    if (x == y):
        print ( "0\n")
    elif (y != 0 and x % y == 0 or x != 0 and y % x == 0):
        print ( "1\n")
    else:
        print ( "2\n")
    
step = int(input())
for _ in range(step):
    solution()
