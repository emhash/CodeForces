# 617A

def calling(f_v):
    xcc = f_v
    # xcc =54.6541
    string_s = str(xcc)
    for i in range(string_s.__len__()):
        if string_s[i] =='.':
            xv = list(string_s)
            n = xv[i+1]
            xv = int(n)
            if xv >= 1:
                x = xcc + .9
                return(int(x))
            else:
                return(int(xcc))

lis_a = [1,2,3,4,5]
new_lis = []
new = int(input())
if new >=1 and new <= 1000000:
    for v in lis_a:
        # if new % v == 0 :
            # print(int(new / v))
            temp = new/v
            new_lis.append(temp)

    print(calling(min(new_lis)))

