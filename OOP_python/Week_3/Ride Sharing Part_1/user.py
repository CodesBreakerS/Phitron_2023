from abc import ABC,abstractmethod
from datetime import datetime


class Ride_sharing:
    def __init__(self,company_name) -> None:
        self.company_name = company_name
        self.riders: list = []
        self.drivers: list = []
        self.ride: list = []
    
    def add_rider(self,rider):
        self.riders.append(rider)
        
    def add_driver(self,driver):
        self.drivers.append(driver)
    
    def __repr__(self) -> str:
        return f'{self.company_name}, with riders: {len(self.riders)} and with drivers: {len(self.drivers)}'

class User(ABC):
    def __init__(self,name,email,nid) -> None:
        self.name = name
        self.email = email
        # TODO: set user id dynamically
        self.__id = 0
        self.__nid = nid
        self.wallet = 0
    
    @abstractmethod
    def display_profile(self):
        raise NotImplementedError

class Rider(User):
    def __init__(self, name, email, nid, current_location,innitial_amount) -> None:
        self.curren_ride = None
        self.wallet = innitial_amount
        self.current_location = current_location
        super().__init__(name, email, nid)
    
    def display_profile(self):
        print(f'Rider: Name- {self.name} & email - {self.email}')
        
    def load_cash(self,amount):
        if amount > 0:
            self.wallet += amount
    
    def update_location(self,current_location):
        self.curren_location = current_location
    
    def request_ride(self,ride_sharing,destination ):
        if not self.curren_ride:
            print(f'Looking for a ride: ')
            ride_request = Ride_request(self,destination)
            ride_matcher = Ride_matching(ride_sharing.drivers)
            ride = ride_matcher.find_driver(ride_request)
            # print('got the ride to ',ride)
            self.curren_ride = ride
    
    def show_current_ride(self):
        print(self.curren_ride)
        
class Driver(User):
    def __init__(self, name, email, nid,current_location) -> None:
        super().__init__(name, email, nid)
        self.current_location = current_location
        self.wallet = 0
    def display_profile(self):
        print(f'Driver: Name- {self.name} & email - {self.email}')
    
    def accept_ride(self,ride):
        ride.set_driver(self)

class Ride:
    def __init__(self,start_locaton,end_location) -> None:
        self.start_location = start_locaton
        self.end_location = end_location
        self.driver = None
        self.rider = None
        self.start_time = None
        self.end_time = None
        self.estimated_fare = None
    
    def set_driver(self,driver):
        self.driver = driver
    def start_ride(self):
        self.start_time = datetime.now()
    def end_ride(self,rider,amount):
        self.end_time = datetime.now()
        self.rider.wallet -= self.estimated_fare
        self.driver.wallet += self.estimated_fare
    
    def __repr__(self) -> str:
        return f'Ride details. : From {self.start_location} to {self.end_location}'

class Ride_request:
    def __init__(self,rider,end_location) -> None:
        self.rider = rider
        self.end_location = end_location

class Ride_matching:
    def __init__(self,driver) -> None:
        self.available_drivers = driver
    
    def find_driver(self,ride_request):
        if len(self.available_drivers) > 0:
            # TODO fine the cloest driver of the rider
            driver = self.available_drivers[0]
            ride = Ride(ride_request.rider.current_location, ride_request.end_location)
            driver.accept_ride(ride)
            return ride

class Vehicle(ABC):
    speed = {
        'car' : 50,
        'bike' : 60,
        'cng' : 20
    }
    
    def __init__(self,vehicle_type,license_plate,rate) -> None:
        self.vehicle_type = vehicle_type
        self.license_plate = license_plate
        self.rate = rate
        self.status = 'available'
    
    @abstractmethod
    def start_drive(seif):
        pass
    
class Car(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate) -> None:
        super().__init__(vehicle_type, license_plate, rate)
    
    def start_drive(self):
        self.status = 'unavailable'

class Bike(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate) -> None:
        super().__init__(vehicle_type, license_plate, rate)
    
    def start_drive(self):
        self.status = 'unavailable'

#chech the class integration
niye_jao = Ride_sharing('Niye jao pakhi')
sakib = Rider('Sakid','sakib@gmail.com',1122,'agrabad',1000)
niye_jao.add_rider(sakib)
boka = Driver('Boka','boka@gmail.com',420,'jamalkhan')
niye_jao.add_driver(boka)
print(niye_jao)
sakib.request_ride(niye_jao,'gec')
sakib.show_current_ride()
