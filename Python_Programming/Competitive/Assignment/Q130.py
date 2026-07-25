import time
import datetime

def CreateNew():
    timestamp = datetime.datetime.now()

    filename = timestamp.strftime("%Y-%m-%d_%H-%M-%S") + ".txt"

    with open(timestamp,"w")as file:
        file.write(f"filename:{timestamp}\n")
        file.write(f"Creation date:{timestamp}\n")
        file.write(f"Creation time :{timestamp}\n")

    print(f"{filename} created successfully")

def main():
    while(True):
        CreateNew()
        time.sleep(60)

if __name__=="__main__":
    main()


   