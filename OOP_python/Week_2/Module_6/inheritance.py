# base clas, parent class, common attribute + functionality class
class Gadget:
    
    def __init__(self,brand,price,color,origin,warentee) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.origin = origin
        self.warentee = warentee
    
    def run(self):
        return f'Runinng laptop: {self.brand}.'


# derived classes , child classes, uncommon attribute + functionality classes
class laptop(Gadget):
    def __init__(self,brand,price,color,origin,warentee,ram,ssd,display) -> None:
        self.ram = ram
        self.ssd = ssd
        self.display = display
        super.__init__(brand,price,color,origin,warentee)
    
    def code(self):
        return f'Learning python and javascript.'
    
    def __repr__(self):
        return f"{self.brand} , {self.price}, {self.color} , {self.origin} ,{self.warentee}, {self.ram}, {self.ssd}"

class phone(Gadget):
    def __init__(self,brand,price,color,origin,warentee,dual_sim,ram,rom,processor) -> None:
        self.dual_sim = dual_sim
        self.ram = ram
        self.rom = rom
        self.processor = processor
        super.__init__(brand,price,color,origin,warentee)
    
    def __repr__(self):
        return f"{self.brand} , {self.price}, {self.color} , {self.origin} ,{self.warentee}, {self.dual_sim}, {self.rom}"

class camera(Gadget):
    def __init__(self,brand,price,color,origin,warentee,lens,weight,size) -> None:
        self.lens = lens
        self.size = size
        self.weight = weight
        super.__init__(brand,price,color,origin,warentee)
        
    
    def len_size(self):
        return f"I am using {self.size} lens."

    def __repr__(self):
        return f"{self.brand} , {self.price}, {self.color} , {self.origin} ,{self.warentee},{self.lens},{self.len_size},{self.weight}"
        

my_phone = phone("Xiaomi",18500,"Black","china","18 month","Yes", 8,None,"Snapdragon")
print(my_phone)