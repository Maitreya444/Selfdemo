#Write a program which accept number from user and display it in reverse order.
#Input : 1234
#Output : 4321

def Reverse(iNo):
    iDigit = 0
    while(iNo !=0):
        iDigit = iNo % 10
        print(iDigit, end='')
        iNo =int (iNo / 10)

def main():
    iValue = 0
    print("Enter a Number")
    iValue = int(input())
    Reverse(iValue)

if __name__ =="__main__":
    main()