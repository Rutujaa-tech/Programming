#Accept : Multiple parameters
#Return : Multiple Value

def Marvellos(Value1,Value2):
    print("Inside Marvellous:",Value1,Value2)
    return 21,51                                #allowed in python multiple return
def main():
    Ret1,Ret2 = Marvellos(10,20)
    print("Return Values are :",Ret1,Ret2)

if __name__ == "__main__":
    main()