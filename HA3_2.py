#Write a program which accept number from user and display its factors in descending order
#Input : 12
#Output: 6   4   3   2   1   

def RevFact(iNo):
    for iCnt in range(iNo, 0, -1):
        if((iNo % iCnt)==0):
            print(iCnt)

def main():
    iValue = 0

    print("Enter a number")
    iValue = int(input())

    RevFact(iValue)

if __name__ == "__main__":
    main()