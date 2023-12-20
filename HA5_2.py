#Write a program which accept number from user and print numbers till that number 
#Input : 8
#Output : 1   2   3   4   5   6   7   8

def Pattern(iNo):
    iCnt = 0
    for iCnt in range(1,iNo+1,1):
        print(iCnt)

def main():
    print("Enter a Number")
    iValue = int(input())
    
    Pattern(iValue)

if __name__ =="__main__":
    main()