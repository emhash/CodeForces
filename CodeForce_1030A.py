
n = int(input())
f = lambda n : n
x = list(map(f,input().split()))
chk = [ "EASY" if i =='0' else "HARD" for i in x ]
if "HARD" in chk:
    print("HARD")
else: 
    print("EASY")