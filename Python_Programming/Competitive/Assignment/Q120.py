import time
import schedule

def Display():
    print("Namskar")

def main():
    print("Automation script is started")

    schedule.every().day.at("9:30").do(Display)

    while(True):
        schedule.run_pending()
        time.sleep(60)

if __name__ == "__main__":
    main()


