#//Write a program which accept two numbers and check wheather numbers are equal or not
#//Input : 10 10
#//Output : Equal
#//Input : 69 88
#//Output : Not Equal

def ChkEqual(iNo1, iNo2):
    if(iNo1 == iNo2):
        return True
    else:
        return False

def main():
    iValue1 = 0
    iValue2 = 0
    bRet = False
    print("Enter a number 1")
    iValue1 = int(input())
    print("Enter a number 2")
    iValue2 = int(input())

    bRet = ChkEqual(iValue1, iValue2)

    if(bRet == True):
        print("Equal")
    else:
        print("Not Equal")

if __name__ =="__main__":
    main()