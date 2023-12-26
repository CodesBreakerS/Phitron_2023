class bank:
    
    def __init__(self,name,balance):
        self.name = name
        self.balance = balance
        self.minimum_withdraw = 100
        self.maximum_withdraw = 100000
        
    def deposit(self,amount):
        if amount > 0:
            self.balance += amount
    
    def withdraw(self,amount):
        if amount < self.minimum_withdraw:
            print(f'You cannot withdraw less than {self.minimum_withdraw}.')
        elif amount > self.maximum_withdraw:
            print(f'You cannot withdraw more than {self.maximum_withdraw}.')
        else:
            self.balance -= amount
            print(f'Here is your {amount}/- tk.')
            print(f'Your new balance is {self.balance}.')

irfan = bank('Irfan',24000)

irfan.deposit(2200)
irfan.deposit(300)
print(f'Your balance is {irfan.balance}.')

irfan.withdraw(10)
irfan.withdraw(100)
irfan.withdraw(1000000)
irfan.withdraw(10000)
