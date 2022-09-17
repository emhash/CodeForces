heybro = int(input())
lookbro = list(map(int, (input().split())[:heybro]))
seebro = sorted(lookbro)
print(*seebro)
