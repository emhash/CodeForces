# 1722A
# DONE
testcase = int(input())
matchList = sorted(['T','i','m','u','r'])
while(testcase>0):
    useless = int(input())
    thestring = input()
    if matchList == sorted(thestring):
        print("YES")
    else:
        print("NO")
    testcase-=1