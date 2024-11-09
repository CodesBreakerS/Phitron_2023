
class bank:
    def __init__(self,name,age,balance):
        self.name = name
        self._age = age
        self.__balance = balance
    # getter
    @property
    def getBalance(self):
        return self.__balance
    # setter
    @getBalance.setter
    def getBalance(self,value):
        self.__balance += value

person = bank('Iran',23,12000)
print(person.getBalance)
person.getBalance = 4500
print(person.getBalance)















