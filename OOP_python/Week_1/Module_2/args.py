def add(num1,num2,*extras):
    sum = num1+num2
    for k in extras:
        sum+=k
    return sum
    
# total = add(1,2,4,6,7)
# print(total)
# b= map(int,input().split())
b = input()
# b = map(int,input().split())
# c = map(int,input().split())
# a = map(int,input().split())
# print(type(a))
# total = add(*b,*c,*a)
total = add(b.split(" ",2))

print(total)