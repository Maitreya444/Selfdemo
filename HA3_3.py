#Write a program which accept number from user and display all its non factors
#Input : 12
#Output: 5    7    8   9   10  11

def NonFact(iNo):
    for iCnt in range (1, iNo, 1):
        if((iNo % iCnt)!=0):
            print(iCnt)

def main():
    iValue = 0

    print("Enter a number")
    iValue = int(input())

    NonFact(iValue)

if __name__ == "__main__":
    main()