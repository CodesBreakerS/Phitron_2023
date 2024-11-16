
class star_cinema:
    hall_list: list = []    #class attribute
    
    def entry_hall(self,hal):
        self.hall_list.append(hal)
    

class Hall:
    def __init__(self,rows,cols,hall_no): #instance attribute
        self.seats = {}
        self.rows = rows
        self.cols = cols
        self.hall = hall_no
        self.show_list = ()
        star_cinema().entry_hall(self)
    
    def entry_show(self,id,movie_name,time):
        self.info = (id,movie_name,time)
        self.show_list.append(self.info)
        self.seats[id] = [['Free' for i in range(self.cols)] for i in range(self.rows)]
        
    def book_seats(self,show_id,):
        self.show_id = show_id
        
    
    def view_show_list(self):
        for show in self.show_list:
            print(show)
    
    def view_available_seats(self,id):
        pass
        














































    # def entry_show(self,id,movie_name,time):
    #         self.tuple = (id,movie_name,time)
    #         self.__show_list.append(self.tuple)
    #         self.seat_list = [['free' for i in range(self.__cols)] for i in range(self.__rows)]
    #         self.__seats[id] = self.seat_list
            
            
            
            
            


