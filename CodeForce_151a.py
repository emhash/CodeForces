thelist = list(map(int, input().split()[:8]))
friends = thelist[0]
drinks = thelist[1]*thelist[2]
limes = thelist[3]*thelist[4]
toast = drinks/thelist[-2]
toastAndSalt = thelist[-3]/thelist[-1]
newlist = [toast , limes,toastAndSalt]
result=((min(newlist))/friends)
print(int(result))
