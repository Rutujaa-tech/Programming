CheckEven = lambda No: (No % 2 == 0)

def main():
    Data = [13,12,8,10,11,20]

    print("Input data is :",Data)

    #functional programming
    FData = list(filter(CheckEven,Data))        #filter is inbuilt function         

    print("Data after filter:",FData)

if __name__=="__main__":
    main()
