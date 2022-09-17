tc = int(input())
for _ in range(tc):
    a,b=map(int , input().split())
    print("Burenka" if (a-1+b-1)%2!=0 else "Tonya")