#Write a program which accept number from user and display multiplication of factors
#Input : 12
#Output : 144 (1 * 2 * 3 * 4 * 6)

def MultFact(iNo):
    Ans = 1
    for iCnt in range(1,iNo,1):
        if((iNo % iCnt)==0):
            Ans = Ans * iCnt
            print(Ans)

def main():
    iValue = 0
    print("Enter a number")
    iValue = int(input())

    MultFact(iValue)

if __name__ =="__main__":
    main()