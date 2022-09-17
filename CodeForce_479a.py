a=int(input())
b=int(input())
c=int(input())
case1 = a+b+c
case2 =a*(b+c)
case3 =a*(b*c)
case4 =(a+b)*c
caselist = [case1 ,case2, case3, case4]
print(max(caselist))