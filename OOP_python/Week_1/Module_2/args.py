def add(num1,num2,*extras):
    sum = num1+num2
    for k in extras:
        sum+=k
    return sum
    
total = add(1,2,4,6,7)
print(total)