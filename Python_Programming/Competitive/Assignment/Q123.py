import schedule
import time

def Display1():
    print("Lunch Time")

def Display2():
    print("Wrap up Work")

def main():
    print("Automation Script is started")

    schedule.every().day.at("1:00").do(Display1)
    schedule.every().day.at("6:00").do(Display2)
    
    while(True):
        schedule.run_pending()
        time.sleep(10)

    
if __name__=="__main__":
    main()