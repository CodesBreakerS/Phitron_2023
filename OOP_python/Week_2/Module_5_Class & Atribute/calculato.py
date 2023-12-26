class cal:
    brand = 'Casio 100MS'
    
    def add(self,num1,num2,*nums):
        sum = num1+num2
        for n in nums:
            sum+=n
        return sum
    def deduct(self,num1,num2):
        ded = num1 - num2
        return ded
    def mul(self,num1,num2):
        m = num1*num2
        return m
    def div(self,num1,num2):
        d = num1//num2
        return d

Cal = cal()
print(Cal)
print(Cal.add(2,5)) 
print(Cal.deduct(6,2))
print(Cal.mul(5,5))
print(Cal.div(10,3))

