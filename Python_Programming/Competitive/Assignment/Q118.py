import schedule
import datetime 
import time

def Display():
    print("Current datatime is:",datetime.datetime.now())

def main():
    print("Automation script is started")

    schedule.every(1).minutes.do(Display)

    while(True):
        schedule.run_pending()
        time.sleep(2)

if __name__ == "__main__":
     main()