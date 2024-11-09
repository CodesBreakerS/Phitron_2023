# overriding

class person:
    def __init__(self,name,city,location) -> None:
        self.name = name
        self.city = city
        self.location = location
        # self.job = job
    def status(self,status):
        self.status = status
        print(f'I am {self.status}')

class dev(person):
    def __init__(self, name, city, location,job,lan) -> None:
        self.job = job
        self.lan = lan
        super().__init__(name, city, location)
    def __repr__(self) -> str:
        return f"My name is {self.name}. I live in {self.city}. I am a {self.lan} {self.job} from {self.location}"
    # overriding the method of parent class method
    def status(self,status):
        self.status = status
        print(f'A developer never be a {self.status}')
    # overloading the function to work wheather 1 instance value greater than another
    def __gt__(self,other):
        if self.location > other.location:
            return f'{other.name} is first developer'
        else:
            return f'{self.name} is first developer'

Irfan = dev('Irfan','ctg',2025,'Developer','Python') 
Meje = dev('Meje','ctg',2024,'professional','django')   
print(Irfan)
print(Meje)
# overriding
Irfan.status('broke')
# overloading
print(Irfan > Meje)

