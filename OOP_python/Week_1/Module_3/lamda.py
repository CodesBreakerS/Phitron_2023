# def double(x):
#     return x*2

double = lambda num: num*2     #SAME SAME BUT DIFFERENT FROM FUNCTIONS
square = lambda num:num**2
add = lambda x,y: x+y
result = double(12)
print(result)
num = input().split()
print(num)
# print(type(num[1]))
n = len(num)
# print(n)
i =int(0)
while i < n:
    num[i] = int(num[i])
    i+=1
print(list(map(double,num)))
# print(add(a = input().split()))
print(add(int(input()),int(input())))

print(square(int(input())))
 