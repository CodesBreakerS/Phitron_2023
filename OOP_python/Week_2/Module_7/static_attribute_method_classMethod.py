class Gadget:
    shopping_mall: str = 'Dubai Mall'  # Static Attribute or Class attribute
    location: str = 'Ctg'

    def __init__(self, name: str, price: int, origin: str):
        self.name = name
        self.price = price  # Instance Attribute
        self.origin = origin

    @classmethod
    def style(cls, color: str):
        print(f'The camera is in {color} color and purchased from {cls.shopping_mall}')
        # only access class/static attributes not instance attributes

    @staticmethod
    def storage(cls: int):  # the self will not be needed for static methods
        print(f'I want it in {cls}GB')


Camera = Gadget('canon', 200000, 'China')

Camera.style('Green')

# Accessing method by class is called ClassMethod
# this method can only access class attributes not instance Attributes
Gadget.style('Black')

# Accessing method by Instance is staticmethod
Camera.storage(12)
