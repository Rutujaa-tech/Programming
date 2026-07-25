import time
import schedule

def Display():
    print("jay ganesh...")

def main():
    print("Automation script is started")

    schedule.every(30).minutes.do(Display)

    while(True):
        schedule.run_pending()
        time.sleep(60)

if __name__ == "__main__":
    main()