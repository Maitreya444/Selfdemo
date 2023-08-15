#Accept one number from user and print that number of * on screen

def PrintStar(iNo):
    for iCnt in range(0,iNo,1):
        print("*")

def main():
    iValue = 0
    iRet = 0

    print("Enter a number")
    iValue = int(input())

    PrintStar(iValue)

if __name__ == "__main__":
    main()