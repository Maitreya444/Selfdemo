#//Accpet one number from user and if that number is < 10 then print Hello else print Demo

def Display(iNo):
    if(iNo <= 10):
        print("Hello")
    else:
        print("Demo")

def main():
    iValue = 0

    print("Enter Number")
    iValue = int(input())

    Display(iValue)

if __name__=="__main__":
    main()