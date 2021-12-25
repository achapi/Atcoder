import math
a,b = map(int,input().split())
l = a * b / math.gcd(a, b)
if(l>1000000000000000000):print("Large")
else:print(math.floor(l))