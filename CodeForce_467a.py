# 467A

n = int(input())
i=1
em=0
while i<=n:
    # print(i)
    pi , qi = map(int ,input().split() )
    if pi>=0 and  (qi >=pi and qi <=100):
        if (pi < qi-1):
            em +=1
        i +=1
print(em)