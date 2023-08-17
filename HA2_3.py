#Accept two numbers from user and display first number in second number of times
#Input : 12    5   
#Output: 12    12  12  12  12

def Display(iNo1,iNo2):
    for iCnt in range(0,iNo2,1):
        print(iNo1)

def main():
    iValue1 = 0
    iValue2 = 0

    print("Enter a number 1")
    iValue1 = int(input())
    print("Enter a number 2")
    iValue2 = int(input())

    Display(iValue1, iValue2)

if __name__ =="__main__":
    main()