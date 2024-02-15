def Difference(arr):
    iSumO = 0
    iSumE = 0
    iCnt = 0

    for iCnt in arr:
        if iCnt %5 ==0:
            print(iCnt)
        
def main():
    size = 0
    arr = []
    iCnt = 0
    iRet = 0

    size = int(input("Enter number of elements : "))

    print("Enter Elements : ")
    for iCnt in range(size):
        arr.append(int(input()))

    print("Elements in the array are : ")
    for iCnt in arr:
        print(iCnt)

    Difference(arr)

if __name__ =="__main__":
    main()