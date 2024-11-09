class laptop:
    # cart = []  #this is class attribute
    def __init__(self,owner):
        self.owner = owner
        self.cart = []      #this is instance attribute
    def add_cart(self,item):
        self.cart.append(item)
        
my_laptop = laptop('Irfan')
my_laptop.add_cart('core i5')
my_laptop.add_cart('16"')

print(my_laptop.owner, *my_laptop.cart)

his_laptop= laptop("petuk")
his_laptop.add_cart('Raizen')
his_laptop.add_cart('14"')

print(his_laptop.owner, *his_laptop.cart)

