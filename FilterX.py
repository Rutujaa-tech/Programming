def CheckEven(No):
    return (No % 2 == 0)

def main():
    Data = [13,12,8,10,11,20]

    print("Input data is :",Data)

    #functional programming
    FData = list(filter(CheckEven,Data))            #  ek parameter iterable dila ani ek functio dila CheckEvenla () bracet takli nahi krn fuction ch name parameter mhanun dil ahe

    print("Data after filter:",FData)

if __name__=="__main__":
    main()
