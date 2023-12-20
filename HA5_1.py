#Write a program which accept number from user and print that number of $&* on screen 
#Input : 5
#Output : $&* $&* $&* $&* $&*

def Pattern(iNo):
    iCnt = 0
    for iCnt in range(0, iNo,1):
        print("$    &   *\t")

def main():
    print("Enter a Number")
    iValue = int(input())

    Pattern(iValue)

if __name__ =="__main__":
    main()