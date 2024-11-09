class animal:
    def __init__(self,name) -> None:
        self.name  = name
    def eat(self):
        print(self.name,"can eat")

class cat(animal):
    def sound(self):
        print(self.name," sound is MEOW")

class dog(animal):
    def sound(self):
        print(self.name," sound is bark")
        
c = cat("cat")
c.eat()
c.sound()
d = dog("dog")
d.eat()
d.sound()