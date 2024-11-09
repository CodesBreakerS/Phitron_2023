from abc import ABC, abstractmethod

class animal(ABC):
    @abstractmethod
    def eat(self):
        print("I want food")
    def loc(no):
        print('i live in zoo.')

class monkey(animal):
    def __init__(self,fruit) -> None:
        self.fruit = fruit
        super().__init__()
    def eat(self):
        print('i want nothing')

mm = monkey('apple')
mm.eat()