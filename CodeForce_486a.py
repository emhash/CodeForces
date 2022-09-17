
def calc(n):
    if(n%2==0):
        return n/2
    else:
        prev = (n-1)/2
        return prev-n
n = int(input())
print(int(calc(n)))


# thenum = int(input())
# thelist = (list(filter(lambda x : x % 2==0  , range(1 , thenum+1))))
# thelist=sum(thelist+[ (v*-1) for v in (list(filter(lambda x : x % 2!=0 ,range(1,thenum+1))))])
# print(thelist)