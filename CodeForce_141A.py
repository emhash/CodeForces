line1 = str(input())
line2 = str(input())
line3 = str(input())
line1 +=line2
res = True
if len(line1) == len(line3):
    for word in line1:
        if(line1.count(word)) != line3.count(word) :
            print("NO")
            res = False
            break
        else:
            res == True
    if res == True:
                print("YES")
else:
    print("NO")