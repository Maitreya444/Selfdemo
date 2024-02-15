def Multiples(iNo):
    iMult = 1
    iDigit = 0

    while(iNo !=0):
        iDigit = iNo % 10
        iMult = iMult * iDigit
        iNo = iNo // 10

    return iMult

def main():
    iValue =0
    iRet = 0

    print("Enter a Number ")
    iValue = int(input())

    iRet = Multiples(iValue)

    print("Multiples are : ", iRet)

if __name__ == "__main__":
    main()