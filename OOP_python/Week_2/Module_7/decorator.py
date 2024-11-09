import math
import time

def timer(fact):
    def inner(*args, **kwargs):
        start = time.time()
        print('stared time')
        fact(n)
        print('ended time')
        end = time.time()
        print('Total time: ', end - start)
    return inner
@timer          # Best way to decorate a Decorator
def getFactorial(n):
    print('Print factorial',end=' ')
    result = math.factorial(n)
    print(f'of {n} = {result}')

n = int(input('Enter a number: '))
getFactorial(n)

# worst way to decorate a Decorator
# timer(getFactorial)()