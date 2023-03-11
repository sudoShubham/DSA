def power(n,m):
    """This function returns n^m """
    assert int(m) == m ,"Exponent should be integer number only"
    if m == 0:
        return 1
    elif m < 0:
        return 1/n * power(n,m+1)
    else:
        return n * power(n,m-1)
    

print(power(-2,3))