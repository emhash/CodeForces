# 9A
# DONE. 

from fractions import *
Yokko , wokko = map(int , input().split())
prob = max(Yokko , wokko)
dot = (6 - (prob-1)) / 6
if (Yokko == 1 and wokko == 1):
    print("1/1")
else:
    print(Fraction(dot).limit_denominator())
