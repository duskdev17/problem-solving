def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def solve(a, b, c, k):
    g = gcd(a, gcd(b, c))
    if g <= k:
        return True
    else:
        return False

t = int(input().strip())
for i in range(1, t + 1):
    a, b, c, k = map(int, input().strip().split())

    result = solve(a, b, c, k)
    if result == True:
      print("Case %d: Peaceful" % (i))
    else:
      print("Case %d: Fight" % (i))


    
