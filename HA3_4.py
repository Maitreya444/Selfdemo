#Write a program which accept number from user and return summation of all its non factors
#Input: 12
#Output: 50
def SumNonFact(iNo):
    Ans = 0
    for iCnt in range(1, iNo, 1):
        if((iNo % iCnt)!=0):
            Ans = Ans + iCnt
    return Ans

def main():
    iValue = 0
    iRet = 0

    print("Enter a number")
    iValue = int(input())

    iRet = SumNonFact(iValue)

    print("Summation is : ", iRet)

if __name__ =="__main__":
    main()