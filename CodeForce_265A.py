# 265A
say1 = str(input())
say2 = str(input())
squirrelMove = 0
for i in range(len(say2)):
    if (say2[i] == say1[squirrelMove]):
        squirrelMove+=1 
print(squirrelMove+1)