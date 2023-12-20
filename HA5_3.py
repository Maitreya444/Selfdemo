#Write a program which accept number from user and print numbers till that number 
#Input : 4
#Output : -4   -3   -2  -1  0  1   2   3   4

def Pattern(iNo):
    iCnt = 0
    for iCnt in range(-iNo,iNo+1,1):
        print(iCnt)

def main():
    print("Enter a Number")
    iValue = int(input())
    
    Pattern(iValue)

if __name__ =="__main__":
    main()