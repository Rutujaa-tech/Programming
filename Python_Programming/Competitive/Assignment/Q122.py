import schedule
import time
import datetime


def WriteDateTime():
    fobj = open("Marvellous.txt", "a")

    fobj.write(str(datetime.datetime.now()))
    fobj.write("\n")

    fobj.close()


def main():
    print("Automation Script Started")

    schedule.every(5).minutes.do(WriteDateTime)

    while True:
        schedule.run_pending()
        time.sleep(1)


if __name__ == "__main__":
    main()