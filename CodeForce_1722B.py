# 1722B
tc = int(input())
while(tc >0):
    useless=int(input())
    print("YES" if str(input()).replace('G','B') == str(input()).replace('G','B') else "NO")
    tc-=1
