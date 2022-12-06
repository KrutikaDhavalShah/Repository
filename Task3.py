import schedule
import time
import datetime

def Task_Minute():
    print("Task based on minutes gets scheduled : ",datetime.datetime.now())

def Task_Hour():
    print("Task based on minutes gets scheduled : ", datetime.datetime.now())

def Task_Day():
    print("Task based on day gets scheduled : ", datetime.datetime.now())
def main():
    print("Inside task scheduler")
    print("Current time is : ",datetime.datetime.now())

    schedule.every(1).minutes.do(Task_Minute)
    schedule.every(1).hour.do(Task_Hour)
    #schedule.every(1).saturday.at("20:47").do(Task_Day)
    schedule.every(1).saturday.at("18:00").do(Task_Day)

    while(True):                 #unconditional infinite loop
        schedule.run_pending()
        time.sleep(1)       #1sec sleep,minimum 1s can put 50s

if __name__ == "__main__":
    main()