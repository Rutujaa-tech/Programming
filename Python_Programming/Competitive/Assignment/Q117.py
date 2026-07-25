import schedule
import time

def Display():
    print("Jay Ganesh...")

def main():
    print("Automation script is started")

    schedule.every(2).seconds.do(Display)

    while(True):
        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()