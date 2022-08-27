# 379A 
# DONE
put , b = map(int , input().split())
tem = float(put)
out = 0
for i in range(put):
    tem = float(tem/b )
    out +=tem/b
    if tem < 1:
        break
put += put/b
print(int(out + put))
