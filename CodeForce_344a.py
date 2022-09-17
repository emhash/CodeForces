# 3444A
counts = 0
emp = ''
for l in range(int(input())):
    match = input()
    if match != emp:
        counts += 1
        emp = match
print(counts)