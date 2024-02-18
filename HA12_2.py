def Max(arr):
    iMin = 0
    iCnt = 0

    for iCnt in arr:
        if iCnt > iMin:
            iMin = iCnt

    return iMin

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

    print("Min is : ", iRet)

if __name__ == "__main__":
    main()
