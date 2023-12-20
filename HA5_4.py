#Accepts N number from user and print all odd Numbers upto N
#Input : 18
#Output : 1    3   5   7   9   11  13

def Pattern(iNo):
    iCnt = 0
    for iCnt in range(1,iNo+1,1):
        if(iCnt %2 !=0):
            print(iCnt)

def main():
    print("Enter a Number")
    iValue = int(input())
    
    Pattern(iValue)

if __name__ =="__main__":
    main()