#Accept number from user and check wheather it is even or odd

def ChkNo(iNo):
    if((iNo % 2)==0):
        return True
    else:
        return False

def main():
    iValue = 0
    bRet = 0

    print("Enter a number")
    iValue = int(input())

    bRet = ChkNo(iValue)

    if(bRet == True):
        print("EVEN")
    else:
        print("ODD")

if __name__ == "__main__":
    main()