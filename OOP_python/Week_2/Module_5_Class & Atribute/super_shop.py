

class shop:
    Super_shop = "Barisha"
    product = {"Ice-Cream":1,"Chips":2,"Chocolate":3}
    price = {1:25,2:10,3:45}
    def __init__(self,name):
        self.name = name
        self.cart = {}
        self.total = 0
    
    def add_to_cart(self,item,quan):
        # self.item = item
        # self.quan = quan
        self.cart.update({item:quan})

name = shop(input("Enter your name:"))
# print(','.join(irfan.items.keys()))
print("We have these items available in the store:")
for key,value in shop.product.items():
    print(f'{value}. {key} : {shop.price.get(value)}')
while True:
    item = int(input("Choose a item or 0 for Total price:"))
    if item == 0:
        for key,val in name.cart.items():
            aa =[k for k, v in shop.product.items() if v == key][0]
            print(f'{aa}: {val} ')
            name.total += (shop.price.get(key)*val)
        # print(name.cart)
        print("Total price is:",name.total,'tk.')
        break
    else:
        quantity = int(input("Quantity:"))
        name.add_to_cart(item,quantity)

pay = int(input(("Request for payment:")))
deci = ''
while pay < name.total:
    if name.cart == {}:
        print("Thank you for Visiting Us.")
        break
    print("""
You don't have sufficiant balance.\nDo you want to delete an Item of reduce quantity? 
""")
    deci = input("DELETE/REDUCE/CANCEL(D/R/C):")
    if deci.lower() == "d":
        for key,val in name.cart.items():
            aa =[k for k, v in shop.product.items() if v == key][0]
            print(f'{aa}({key}): {val} ')
        choose = int(input("Choose number inside bracket():"))
        del name.cart[choose]
        name.total = 0
        for key,val in name.cart.items():
            name.total += (shop.price.get(key)*val)
        print("Total price is:",name.total,'tk.')
    elif deci.lower() == 'r':
        for key,val in name.cart.items():
            aa =[k for k, v in shop.product.items() if v == key][0]
            print(f'{aa}({key}): {val} ')
        choose = int(input("Choose number inside bracket():"))
        quan = int(input("Quantity:"))
        name.add_to_cart(choose,quan)
        name.total = 0
        for key,val in name.cart.items():
            name.total += (shop.price.get(key)*val)
        print("Total price is:",name.total,'tk.')
    else:
        print("Thank you for Visiting Us.")
        break
if name.cart !={} and deci.lower()!='C':
    print('''Please wait, we\'re packaging your product
    ..............
    .................
    ....................''')

    from time import sleep
    sleep(2.60)
    print(f"You exchage is :{pay-name.total}tk.\nThank you for Shopping here.")



# Meje = shop("meje")
# Meje.add_to_cart("Ice-cream")
# Meje.add_to_cart("Chips")

# irfan = shop("irfan")
# irfan.add_to_cart("coffee")
# irfan.add_to_cart("halim") 

# print(f"Meje cart:{','.join(Meje.cart)}")  
# print("Irfan cart:",','.join(irfan.cart))  

# x = 10000000
# print(f'{x:,}')
    
    
    