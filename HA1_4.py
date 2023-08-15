def ChkDivisible(iNo):
    if((iNo % 5)==0):
        return True
    else:
        return False

def main():
    iValue = 0
    bRet = 0

    print("Enter First Number")
    iValue = int(input())

    bRet = ChkDivisible(iValue)

    if(bRet == True):
        print("No is divisible by 5")
    else:
        print("No is Not divisible by 5")

if __name__ == "__main__":
    main()