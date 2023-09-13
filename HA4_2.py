#Write a program which accept number from user and check wheather it is greater than 100 or not
#Input : 11 Smaller
#Output : 520 Greater

def ChkNumber(iNo):
    if(iNo <=100):
        return True
    else:
        return False

def main():
    iValue = 0
    print("Enter a number")
    iValue = int(input())

    iRet = ChkNumber(iValue)

    if(iRet == True):
        print("Smaller")
    else:
        print("Greater")

if __name__=="__main__":
    main()