class Star_Cinema:
        hall_list: list=[]
        def entry_hall(self,hall):
                self.hall_list.append(hall)
class Hall(Star_Cinema):
    def __init__(self,rows,cols,hall_no):
        self.seats={}
        self.show_list=[]
        self.rows=rows
        self.cols=cols
        self.hall_no=hall_no
        super().entry_hall(self)
    def entry_show(self,id,movie_name,time):
      tup=(id,movie_name,time)
      self.show_list.append(tup)
      cinema_seats = [['free' for _ in range(self.cols)] for _ in range(self.rows)]
      self.seats[id]=cinema_seats
    def view_show_list(self):
        print("Available shows:")
        for show in self.show_list:
            print(f"Movie name:{show[1]} Show id:{show[0]} Time:{show[2]}")
    def view_available_seats(self,id):
        if id not in self.seats:
            print ("Not found")
            return
        print(f"Available seats for show{id}:")
        for row in self.seats[id]:
             print(" ".join(['O' if seat == "free" else '1' for seat in row]))
    def book_seats(self, id, seat_list):
        if id not in self.seats:
            print("Show ID not found.")
            return

        for row, col in seat_list:
            if row < 1 or row > self.rows or col < 1 or col > self.cols:
                print(f"Invalid seat coordinates: ({row}, {col})")
            elif self.seats[id][row - 1][col - 1] == 'booked':
                print(f"The seat ({row}, {col}) is already booked.")
            else:
                self.seats[id][row - 1][col - 1] = 'booked'
                print(f"Seat ({row}, {col}) successfully booked.")

        print("\nUpdated Seat Layout:")
        for row in self.seats[id]:
            print(" ".join(['O' if seat == "free" else '1' for seat in row]))
cinema =Star_Cinema()
halls= Hall(5,5,"ab")
halls.entry_show("01", "abc", "19/01/2022 03:00 AM")
halls.entry_show("02", "abb", "19/01/2022 03:30 AM")
while True:
    print("\n1. VIEW ALL SHOWS TODAY")
    print("\n2. VIEW  AVAILABLE SEATS ")
    print("\n3.BOOK TICKET FOR SHOW")
    print("\n4. EXIT")
    option = input("ENTER OPTION: ")
    if option == "1":
        for hall in cinema.hall_list:
            hall.view_show_list()
    elif option == "2":
        id = input("ENTER SHOW  ID TO VIEW AVAILABLE SEATES: ")
        show_found = False
        for hall in cinema.hall_list:
            if id in hall.__seats:
                hall.view_available_seats(id)
                show_found = True
                break
        if not show_found:
            print("SHOW ID NOT FOUND.")
    elif option == "3":
        id = input("ENTER SHOW ID TO BOOK SEATS: ")
        num_seats = int(input("NUMBER OF TICKETS PLEASE: "))
        seat_numbers = []
        for _ in range(num_seats):
            row = int(input("ENTER SEAT ROW: "))
            col = int(input("ENTER SEAT COLUMN: "))
            seat_numbers.append((row, col))
        show_found = False
        for hall in cinema.hall_list:
            if id in hall.seats:
                hall.book_seats(id, seat_numbers)
                show_found = True
                break
        # if not show_found:
        else:
            print("SHOW ID NOT FOUND.")
    elif option == "4":
        print(" EXIT THE PROCESS.")
        break
    else:
        print("Please try again.")