def Max(arr):
    iMax = 0
    iCnt = 0

    for iCnt in arr:
        if iCnt > iMax:
            iMax = iCnt

    return iMax

def main():
    iSize = 0
    Arr = []
    iCnt = 0
    iRet = 0

    iSize = int(input("Enter the Number of Elements : "))

    print("Enter the Number of Elements : ")
    for iCnt in range(iSize):
        Arr.append(int(input()))

    print("Elemnts in Array are : ")
    print(Arr)

    iRet = Max(Arr)

    print("Max is : ", iRet)

if __name__ == "__main__":
    main()
