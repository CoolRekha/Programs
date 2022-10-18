from datetime import datetime   
from playsound import playsound
import time

def validate_time(alarm_time):
    if len(alarm_time) != 11:
        return "Invalid time format! Please include space after seconds and add AM/PM"
    else:
        if int(alarm_time[0:2]) > 12:
            return "Invalid HOUR format! Please try again..."
        elif int(alarm_time[3:5]) > 59:
            return "Invalid MINUTE format! Please try again..."
        elif int(alarm_time[6:8]) > 59:
            return "Invalid SECOND format! Please try again..."
        else:
            return "ok"

while True:
    alarm_time = input("Enter the time of alarm to be set:HH:MM:SS in AM/PM format\n")

    validate=validate_time(alarm_time.lower())
    if validate!="ok":
        print(validate)
    else:
        print("Setting up alarm..") 
        break
alarm_hour=alarm_time[0:2]
alarm_minute=alarm_time[3:5]
alarm_seconds=alarm_time[6:8]
alarm_period = alarm_time[9:11].upper()        

while True:
    now = datetime.now()
    current_hour = now.strftime("%I")
    current_minute = now.strftime("%M")
    current_seconds = now.strftime("%S")
    current_period = now.strftime("%p")
    
    if(alarm_hour==current_hour):
        if(alarm_minute==current_minute):
            if(alarm_seconds==current_seconds):
                
                 print("Wake Up!")
                 playsound('audio.mp3')
                 snooze= input("Would you like to snooze? Yes/No response\n")
                 if snooze=='Yes':
                     time.sleep(5)
                     print("Wake up")
                     playsound('audio.mp3')
                     break
                 else:           
                     break
