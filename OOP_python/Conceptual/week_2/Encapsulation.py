##               public encapsulation
class stu:
    def __init__(self,name,id) -> None:
        self.name = name
        self.id = id
    def details(self):
        print("name:",self.name,"id:",self.id)

ob = stu('meje',25)
print('before change')
print(ob.id)
print('after change')
ob.id = 0
print(ob.id)

##              private encapsulation


