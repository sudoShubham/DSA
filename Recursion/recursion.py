def myRecursion(n):
    if n<1:
        print("n is less than 1")
    else:
        myRecursion(n-1)
        print(n)

myRecursion(4)