def fib(m):
    if m == 1:
        x = 0
    elif m == 2:
        x = 1
    else:
        x = fib(m-2) + fib(m-1)
    return x
print(fib(9))