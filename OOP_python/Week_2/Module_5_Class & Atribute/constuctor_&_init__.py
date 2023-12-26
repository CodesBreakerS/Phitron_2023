class car:
    manufactur = 'Italy'
    
    def __init__(self,owner,brand,million):
        self.owner = owner
        self.brand = brand
        self.million = million
        
my_car = car('Irfan','Ferrari',15)
print(my_car.owner,my_car.brand,my_car.million)
        
his_car = car('Ardika','Modile',20)
print(his_car.owner,his_car.brand,his_car.million)
print(f'Name of the owner: {his_car.owner}. He bought a {his_car.brand} brand car. This cost him ${his_car.million} million')