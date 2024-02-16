def EvenFrequency(arr):
    iCount = 0
    iCnt = 0

    for iCnt in arr:
        if iCnt % 2 ==0:
            iCount +=1
    
    return iCount

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

    iRet = EvenFrequency(arr)

    print("Even Frequency is : ",iRet)

if __name__ =="__main__":
    main()