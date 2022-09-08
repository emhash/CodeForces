# A - Sum of Round Numbers	
# PyPy 3-64	
# Accepted
def rounding(thenumber):
    a = list(str(thenumber))
    val = ['','','0','00','000','0000']
    x=len(a)
    empList =[]
    for i in range(len(a)):
        empList.append(((a[i])+val[x]))
        x-=1
    empList[:] = (value for value in empList if value != "0" and value != "00" and value != "000" and value != "0000")
    return empList
tc = int(input())
for i in range(tc):
    enter = int(input())
    if enter <=10000:
        print(len(rounding(enter)))
        print(*rounding(enter))