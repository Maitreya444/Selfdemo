#Write a program which accept number from user and return count of even digit.
#Input : 1234
#Output : 2

def Check3and7(iNo):
    iDigit = 0
    iCount = 0

    while(iNo !=0):
        iDigit = iNo % 10
        if(iDigit >3 & iDigit <7):
            iCount +=1
        iNo = iNo // 10

    return iCount

def main():
    iValue = 0
    iRet = 0

    print("Enter a Value")
    iValue = int(input())

    iRet = Check3and7(iValue)

    print("Count is : ", iRet)

if __name__ == "__main__":
    main()