def Binary1(n):
    if n == 0:
        return 0
    else:
        return n%2 + 10 * Binary1(n//2)

def Binary2(n):
    if n == 0:
        return 0
    else:
        Binary2(n//2)
        print(n%2,end="")

print(Binary1(13))
Binary2(13)