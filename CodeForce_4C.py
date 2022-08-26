number = int(input())
emptyDict = {}
while number > 0:
    usrInKey = str(input())
    if usrInKey in emptyDict:
        print(usrInKey+str(emptyDict[usrInKey]))
        emptyDict[usrInKey] += 1
    else:
        print("OK")
        emptyDict[usrInKey] = 1
    number -=1


