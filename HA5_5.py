#Write a program which accepts N and print first 5 Multiples of it
#Input : 4
#Output : 4    8    12     16      20

def Pattern(iNo):
    iCnt = 0
    for iCnt in range(1,5+1,1):
        print(iCnt*iNo)

def main():
    print("Enter a Number")
    iValue = int(input())
    
    Pattern(iValue)

if __name__ =="__main__":
    main()