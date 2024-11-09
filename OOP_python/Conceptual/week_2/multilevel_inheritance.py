class grandfather:
    def __init__(self) -> None:
        pass
    def property(self):
        print("i have $5 million")
class father(grandfather):
    def property(self):
        print('i have $3 million')
    def father_property(self):
        super().property()
class child(father):
    def property(self):
        print('i have $1 million')
    def father_property(self):
        super().property()
    def grandfather_property(slef):
        return super().father_property()

meje = child()
meje.property()
meje.father_property()
meje.grandfather_property()
        