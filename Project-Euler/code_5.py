def gcd(a,b):
    if not a:
        return b
    else:
        return gcd(b%a,a)

def lcm(a,b):
    return ((a * b) / gcd(a,b))

res = lcm(1,2)
for i in range(3,21):
    res = lcm(res,i)

print res
