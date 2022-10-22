def fact(k):
  f = i = 1
  while i<=k:
    f = i*f
    i += 1
  return f

def findperm(x, y):
  num = fact(x)
  den = fact(x - y)
  perm = num / den
  return perm

def findcomb(x, y):
  num = fact(x)
  den = fact(x - y)
  den = fact(y) * den
  comb = num / den
  return comb

print("Enter the Value of n: ", end="")
n = int(input())
print("Enter the Value of r: ", end="")
r = int(input())

print("\nPermutation (nPr) =", findperm(n, r))
print("Combination (nCr) =", findcomb(n, r))
