class product:
    def __init__(self,name,quantity):
        self.name = name
        self.quantity = quantity


class shop:
    def __init__(self):
        self.item = []
        
    def add_prod(self,name,quantity):
        prod = product(name,quantity)
        self.item.append(prod)
    
    def buy_prod(self,name,quantity):
        for item in self.item:
            if item.name == name:
                if quantity <= item.quantity:
                    item.quantity -= quantity
                    print(f"Thank you for shopping here.\nYour product:{name}, {quantity}")
                    break
                else:
                    if item.quantity !=0:
                        print(f'Sorry,we only have {item.quantity} {item.name}\'s')
                    else:
                        print(f'Sorry we don\'t have {item.name}.')
            else:
                print(f'Sorry we don\'t have {item.name}.')
                break
        
    def display(self):
        print('Available:')
        for item in self.item:
            print(f'{item.name}-{item.quantity}')
            
            
groc = shop()
groc.add_prod('Egg',4)
groc.add_prod('fish',2)

# groc.buy_prod('Egg',2)
groc.buy_prod('Egg',3)
groc.buy_prod('chicken',2)

groc.display()