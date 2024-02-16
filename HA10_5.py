def Frequency(arr, iNo):
    ECount = 0
    OCount = 0
    iCnt = 0

    for iCnt in arr:
        if iCnt  ==iNo:
            return True
    

def main():
    iSize = 0                                                            
    arr = []
    iCnt = 0
    iRet = 0
    iNo = 0

    iSize = int(input("Enter Number of Elements : "))

    iNo = int(input("Enter the Number you want to check : "))

    print("Enter Number of Elements : ")
    for iCnt in range(iSize):
        arr.append(int(input()))

    print("Elements in Array are : ")
    for iCnt in arr:
        print(iCnt)

    iRet = Frequency(arr, iNo)

    print("No is : ",iRet)

if __name__ =="__main__":
    main()