def GCD(a,b):
    assert int(a) == a and int(b) == b,"Numbers must be integers only"
    if a>b:
        maximum = a
        minimum = b
    else:
        maximum = b
        minimum = a

    if maximum < 0:
        maximum = maximum * -1
    if minimum < 0:
        minimum = minimum * -1


    if minimum == 0:
        return maximum
    else:
        return GCD(minimum,maximum % minimum)
    

print(GCD(-3,-2))