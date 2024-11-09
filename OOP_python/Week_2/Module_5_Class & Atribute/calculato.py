class cal:
    brand = 'Casio 100MS'
    
    def add(self,num1,num2,*nums):
        sum = num1+num2
        for n in nums:
            sum+=n
        return sum
    def deduct(self,num1,num2):
        ded = num1 - num2
        return abs(ded)
    def mul(self,num1,num2):
        m = num1*num2
        return m
    def div(self,num1,num2):
        return num1//num2

Cal = cal()
# print(Cal)
# print(Cal.add(2,5)) 
# print(Cal.deduct(6,2))
# print(Cal.mul(5,5))
# print(Cal.div(10,3))
while 1:
    print(Cal.brand)
    print("""    1.Add
    2.Subtract
    3.Multiply
    4.Divide
    5.exit""")
    option = int(input("Enter Option:"))
    if option==5:
        break
    else:
        print("Enter numbers: ",end="")
        a,b = map(int,input().split())
        match option:
            case 1:
                print(Cal.add(a,b))
            case 2:
                print(Cal.deduct(a,b))
            case 3:
                print(Cal.mul(a,b))
            case 4:
                print(Cal.div(a,b))

