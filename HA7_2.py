#Write a program which accept number from user and display it in reverse order.
#Input : 1234
#Output : 4321

def Check0(iNo):
    iDigit = 0
    while(iNo !=0):
        iDigit = iNo % 10
        if(iDigit == 0):
            return True
        iNo = int(iNo / 10)
    return False

def main():
    iValue = 0
    bRet = False
    print("Enter a Number")
    iValue = int(input())
    bRet = Check0(iValue)
    if(bRet == True):
        print("0 is presnet")
    else:
        print("0 is absent")

if __name__ =="__main__":
    main()