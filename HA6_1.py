#Write a program which accept number from user and if number is les than 50 then print small, if it is greater 
#than 50 and less than 100 then print medium, if its greater than 100 then print large.

def Number(iNo):
    if(iNo <= 50):
        print("Smaller")
    elif (iNo > 50 and iNo <=100):
        print("Medium")
    else:
        print("Greater")

def main():
    iValue = 0
    print("Enter a Number")
    iValue = int(input())

    Number(iValue)

if __name__ =="__main__":
    main()