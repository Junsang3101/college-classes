class Time():
    def __init__(self, hour, min, sec):
        self.hour = hour
        self.min = min
        self.sec = sec

    def get_hour(self):
        return self.hour
    
    def get_min(self):
        return self.min
    
    def get_sec(self):
        return self.sec
    
time = Time(10, 20, 30)
print(f"{time.get_hour()}시 {time.get_min()}분 {time.get_sec()}초")