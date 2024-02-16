def Frequency(arr):
    ECount = 0
    OCount = 0
    iCnt = 0

    for iCnt in arr:
        if iCnt % 11 ==0:
            return True
    

def main():
    iSize = 0                                                            
    arr = []
    iCnt = 0
    iRet = 0

    iSize = int(input("Enter Number of Elements : "))

    print("Enter Number of Elements : ")
    for iCnt in range(iSize):
        arr.append(int(input()))

    print("Elements in Array are : ")
    for iCnt in arr:
        print(iCnt)

    iRet = Frequency(arr)

    print("Frequency is : ",iRet)

if __name__ =="__main__":
    main()