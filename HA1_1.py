def Divide(iNo1, iNo2):

    iAns = 0
    iAns = iNo1 / iNo2
    return iAns

def main():
    No1 = 0
    No2 = 0
    Ans = 0

    print("Enter 1st Number")
    No1 = int(input())

    print("Enter 2nd Number")
    No2 = int(input())

    Ans = Divide(No1, No2)

    print(Ans)

if __name__ == "__main__":
    main()