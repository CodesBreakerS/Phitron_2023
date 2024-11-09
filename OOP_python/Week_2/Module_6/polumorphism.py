from math import pi
class shape:
    def __init__(self,name) -> None:
        self.name = name 

class rectangle(shape):
    def __init__(self, name,length,width) -> None:
        super().__init__(name)
        self.length = length
        self.width = width
    def area(self):
        return self.length*self.width
class triangle(shape):
    def __init__(self, name,length,width,height) -> None:
        super().__init__(name)
        self.length = length
        self.width = width
        self.height = height
        
    def area(self):
        return self.length*self.width*self.height

class circle(shape):
    def __init__(self, name,rad) -> None:
        self.radius = rad
        super().__init__(name)
    
    def area(self):
        return pi*self.radius

tri = triangle('Triangle',3,3,3)
print(tri.area())