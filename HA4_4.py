#Write a program which accept three numbers and print its multiplication.
#Input : 5   4   7
#Output : 140
def Multiply(iNo1, iNo2, iNo3):
    iAns = 1
    if(iNo1 !=0):
        iAns = iAns * iNo1
    if(iNo2 !=0):
        iAns = iAns * iNo2
    if(iNo3 !=3):
        iAns = iAns * iNo3

    return iAns

def main():
    iValue1 = 0
    iValue2 = 0
    iValue3 = 0
    iRet = 0

    print("Enter 1st Number")
    iValue1 = int(input())
    print("Enter 2nd Number")
    iValue2 = int(input())
    print("ENter 3rd Number")
    iValue3 = int(input())

    iRet = Multiply(iValue1, iValue2, iValue3)

    print("Multiliaction is :",iRet)

if __name__ =="__main__":
    main()