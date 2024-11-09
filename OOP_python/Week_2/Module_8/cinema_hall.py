
class star_cinema:
    hall_list = []    #class attribute
    
    def entry_hall(self,hal):
        self.hall_list.append(hal)
    

class Hall:

    def __init__(self,rows,cols,hall_no): #instance attribute
        self.seats = {}
        self.rows = rows
        self.cols = cols
        self.hall = hall_no
        self.show_list = []
        star_cinema().entry_hall()
    
    def entry_show(self,show_id,movie_name,time):
        self.info = (show_id,movie_name,time)
        self.show_list.append(self.info)
        seat_l = [['F' for i in range(self.cols)] for i in range(self.rows)]
        self.seats[show_id] = seat_l
    # def book_seats(self,show_id,row, col):
    #     if show_id in self.show_list:
    #         for i in range(col):
    #             for i in range(row):
    #                 if

        
    
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
            
            
# cinema = star_cinema()
#
# hall1 = Hall(4,5,1)
# cinema.entry_hall(hall1)
cols = 10
rows = 10
sea = []
id = 'k9'

sea[id] = [['F' for _ in range(cols)] for _ in range(rows)]
for row in sea:
    print(f'{row} ')
