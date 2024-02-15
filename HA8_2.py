#Write a program which accept number from user and return count of odd digit.
#Input : 1234
#Output : 2

def CheckOdd(iNo):
    iDigit = 0
    iCount = 0

    while(iNo !=0):
        iDigit = iNo % 10
        if(iDigit % 2 !=0):
            iCount +=1
        iNo = iNo //10

    return iCount

def main():
    iValue = 0
    iRet = 0
    print("Enter a Number")
    iValue = int(input())

    iRet = CheckOdd(iValue)
    print("Odd Value is : ", iRet)

if __name__ =="__main__":
    main()