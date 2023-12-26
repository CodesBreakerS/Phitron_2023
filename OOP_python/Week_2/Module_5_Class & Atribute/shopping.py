from time import sleep
class shop:
    def __init__(self,name):
        self.name = name
        self.cart = []
    
    def add_to_cart(self,item,price,quantity):
        product = {'Item':item,'Price':price,'Quantity':quantity}
        self.cart.append(product)

    def remv(self,delte):
        for i in self.cart:
            if i['Item'] == delte:
                self.cart.remove(i)
                break
                    
    def checkout(self,amount):
        total = 0
        for item in self.cart:
            total += item['Price'] * item['Quantity']
            print(f'Item:{item['Item']}, Price:{item['Price']}, Quantity:{item['Quantity']}')
        print("Total amount is:",total)
        while True:
            if total <= amount:
                print('''Please wait, we\'re packaging your product
..............
.................
....................''')
                sleep(2.60)
                amount-=total
                print(f'{self.name},Here is your product and you\'r new balance:{amount}.')
                print('Thank you for shopping here.')
                break
            elif total > amount:
                amount = total -amount
                print(f'Please provide more:',amount)
                
                while True:
                    print('Do you want to delete any item? (Yes/No) ')
                    ans = input()
                    if ans.lower() == 'yes':
                        dit = input('Item to Delete:')
                        self.remv(dit)
                        self.checkout(money)
                        break
                    else:
                        print('Thank you for visiting here.')
                        break
                break    
        


customer = int(input('Number of customer:'))
for i in range(customer):
    name = input("Name of the customer:")
    name = shop(name)
    while True:
        i = input('Add item:')
        if i == '-1':
            break
        p = int(input('Add price:'))
        q = int(input('Add quantity:'))
        name.add_to_cart(i,p,q)
    # print(name.cart)
    money = int(input('Given Money:'))
    name.checkout(money)
    
    


