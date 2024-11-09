
class Book:
    def __init__(self,id, name, quantity):
        self.id = id
        self.name = name
        # self.author = author
        self.quantity = quantity

class User:
    def __init__(self, id, name, password):
        self.id = id
        self.name = name
        # self.email = email
        self.password = password
        self.borrowBooks = []
        self.returnBooks = []

class library:
    def __init__(self, name):
        self.name = name
        self.books = []
        self.users = []

    def addBook(self, id, name, quantity):
        book = Book(id,name,quantity)
        self.books.append(book)
        print(f'{book.name} book added successfully.')

    def addUser(self, id, name, password):
        user = User(id, name, password)
        self.users.append(user)
        return user

    def borrowbook(self, user, token):
        for book in self.books:
            if book.name == token:
                if book in user.borrowBooks:
                    print("Already borrowed!")
                    return
                elif book.quantity == 0:
                    print('Sorry! No copy Available.')
                    return
                else:
                    user.borrowBooks.append(book)
                    book.quantity -= 1
                    print(f'Borrowed {token.capitalize()} book successfully')
                    return
        print('Not found any book with name',token.capitalize())

    def returnbook(self, user, token):
        for book in self.books:
            if book.name == token:
                if book in user.borrowBooks:
                    book.quantity += 1
                    user.returnBooks.append(book)
                    user.borrowBooks.remove(book)
                    print(f'Returned book successfully')
            else :
                print('You don\'t have any book with name',token.capitalize())


meje = library('MEJE')

admin = meje.addUser(100,'admin', '111')
irfan = meje.addUser(101, 'Irfan', '123')
lBook = meje.addBook(10,'Love Book', 10)

currentUser = admin

while True:
    if currentUser == None:
        print("No logged in user.")

        option = input("Log in or Register (l/r): ").lower()
        if option == 'l':
            id = int(input("Enter id: "))
            password = input("Enter password: ")

            match = False
            for user in meje.users:
                if user.id == id and user.password == password:
                    currentUser = user
                    match = True
                    break
            if match == False:
                print("No user Found")
        elif option == 'r':
            id = int(input("Enter id:"))
            name = input('Enter name: ')
            password = input('Enter password: ')

            for user in meje.users:
                if user == id:
                    print('User already exist')

            user = meje.addUser(id, name, password)
            currentUser = user

    else:
        print(f"\nWelcome back {currentUser.name}")
        if currentUser.name == 'admin':
            print("""Options:    
    1.Add Book
    2.Add user
    3.Show All Books
    4.Log out""")
            op = int(input("Enter option: "))
            
            if op == 1:
                id = int(input('Enter Book id: '))
                name = input('Enter book name: ').strip().lower()
                quantity = int(input("Enter no of books: "))
                meje.addBook(id, name, quantity)
            elif op == 2:
                id = int(input('Enter id: '))
                name = input('Enter name: ').strip()
                quantity = input("Enter Password: ")
                meje.addUser(id, name, password)
            elif op == 3:
                for book in meje.books:
                    print(f'ID:{book.id}\tNAME:{book.name}')
            elif op == 4:
                currentUser = None
            else:
                print("\n\t---> !!! Choose Valid Option\n")
        else:
            print('\t***All Books**\t\n')
            for book in meje.books:
                print(f'Book Name: {book.name} - {book.quantity}Piece')
            print("""Options:
    1.Borrow book
    2.Return book
    3.Show borrowed all books
    4.Show history
    5.Log out""")
            op = int(input("Enter option: "))

            if op == 1:
                name = input('Enter book name: ').lower().strip()
                meje.borrowbook(currentUser, name)
            elif op == 2:
                name = input('Enter book name: ').lower().strip()
                meje.returnbook(currentUser, name)
            elif op == 3:
                print('***Borrowed Books***')
                if len(currentUser.borrowBooks)!=0:
                    for book in currentUser.borrowBooks:
                        print(f'ID:{book.id}\tNAME:{book.name}')
                else:
                    print("\tEmpty\t")
            elif op == 4:
                print('***History***')
                if len(currentUser.returnBooks)!=0:
                    for book in currentUser.returnBooks:
                        print(f'ID:{book.id}\tNAME:{book.name}')
                else:
                    print("\tEmpty\t")
            elif op == 5:
                currentUser = None
            else:
                print("\n\t---> !!! Choose Valid Option\n")



