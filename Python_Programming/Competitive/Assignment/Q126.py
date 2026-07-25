import time     
import schedule

def Display_message(message):
    print(message)
def main():
    message = input("Enter the message:")
    interval = int(input("Enter the interval:"))

    if(interval <= 0):
            print("Error: Invalid interval! please enter the greater than 0")
    
    schedule.every(interval).seconds.do(Display_message,message)

    while(True):
        schedule.run_pending()
        time.sleep(1)


if __name__=="__main__":
    main()