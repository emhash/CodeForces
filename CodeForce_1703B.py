# 1703B
tc = int(input())
for _ in range(tc):
    useless = input()
    problem = input()
    filtering = len(set(problem))*2
    print( filtering +(len(problem)-len(set(problem))))
