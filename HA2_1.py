#Accept one number from user and print that number of * on screen

def Display(iNo):
    for iCnt in range(0, iNo, 1):
        print("*")

def main():
    iValue = 0

    print("Enter a number")
    iValue = int(input())

    Display(iValue)

if __name__=="__main__":
    main()