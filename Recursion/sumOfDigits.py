def sumOfDigits(n):
    """This function returns sum of digits of of positive integer number."""
    assert n>=0 and int(n) == n, "Number should be postive number."
    if(n%10 == n):
        return n
    else:
        return n%10 + sumOfDigits(int(n/10))
    
print(sumOfDigits(0))