class product:
    def __init__(self,name,quantity):
        self.name = name.lower()
        self.quantity = quantity


class shop:
    def __init__(self):
        self.item = []
    
    def add_prod(self,products):
        self.item.append(products)
        
        
    
    def buy_prod(self,name,quantity):
        name = name.lower()
        for item in self.item:
            if item.name == name:
                if quantity <= item.quantity:
                    item.quantity -= quantity
                    print(f"Thank you for shopping here.\nYour product:{name}, {quantity}")
                    # raise Exception(f"Thank you for shopping here.\nYour product:{name}, {quantity}")
                    return
                else:
                    if item.quantity !=0:
                        print(f'Sorry,we only have {item.quantity} {item.name}\'s')
                        return
                    else:
                        print(f'Sorry we don\'t have any {item.name}.')
                        return
        
        print(f'Sorry we don\'t have the {name}.')
         
    def display(self):
        print('Available:')
        for item in self.item:
            print(f'{item.name}-{item.quantity}')
                
groc = shop()
Product1 = product('Egg',4)
Product2 = product('Fish',2)
groc.add_prod(Product1)
groc.add_prod(Product2)

# using print for normal flow of the code
# groc.buy_prod('Egg',2)
# groc.buy_prod('Egg',3)
# groc.buy_prod('chicken',2)
# groc.buy_prod('Egg',2)
# groc.buy_prod('Fish',3)
# groc.buy_prod('Fish',2)

#using try-except block to interrupted program flow for raise Exception
try:
    groc.buy_prod('Egg', 2)
except Exception as e:
    print(e)

try:
    groc.buy_prod('Egg', 3)
except Exception as e:
    print(e)
try:
    groc.buy_prod('Chicken', 2)
except Exception as e:
    print(e)

try:
    groc.buy_prod('Egg', 2)
except Exception as e:
    print(e)
try:
    groc.buy_prod('fish', 3)
except Exception as e:
    print(e)

try:
    groc.buy_prod('fish', 2)
except Exception as e:
    print(e)



groc.display()