class Array:
    def __init__(self, iSize, iCheck):
        self.iSize = iSize
        self.iCheck = iCheck
        self.Arr = [0] * iSize

    def __del__(self):
        del self.Arr

    def Accept(self):
        print("Enter the elements:")
        for i in range(self.iSize):
            self.Arr[i] = int(input())

    def Display(self):
        print("Elements of the array are: ")
        for iCnt in self.Arr:
            print(iCnt, end="\t")
        print()

    def ChkNo(self):
        for iCnt in self.Arr:
            if self.iCheck == iCnt:
                return True
        return False

    def ChkInx(self):
        for iCnt in range(self.iSize):
            if self.Arr[iCnt] == self.iCheck:
                return iCnt
        return -1

    def ChkLast(self):
        for iCnt in range(self.iSize - 1, -1, -1):
            if self.Arr[iCnt] == self.iCheck:
                return iCnt
        return -1

    def ChkRange(self, iStart, iEnd):
        found = False
        print("Elements in the range are: ", end="")
        for iCnt in self.Arr:
            if iStart <= iCnt <= iEnd:
                print(iCnt, end=" ")
                found = True
        if not found:
            print("Not found", end="")
        print()

    def OddPro(self):
        product = 1
        found = False
        for iCnt in self.Arr:
            if iCnt % 2 != 0:
                product *= iCnt
                found = True
        if not found:
            product = 0
        return product


def main():
    iValue1 = int(input("Enter number of elements: "))
    iValue2 = int(input("Enter the number you want to check: "))

    aobj = Array(iValue1, iValue2)
    aobj.Accept()
    aobj.Display()

    bRet = aobj.ChkNo()
    cRet = aobj.ChkInx()
    dRet = aobj.ChkLast()

    iStart = int(input("Enter a starting point: "))
    iEnd = int(input("Enter the ending point: "))

    aobj.ChkRange(iStart, iEnd)

    gRet = aobj.OddPro()

    if bRet:
        print("TRUE")
    else:
        print("FALSE")

    if cRet != -1:
        print(f"First occurrence index is {cRet}")
    else:
        print("Number not found")

    if dRet != -1:
        print(f"Last occurrence index is {dRet}")
    else:
        print("Number not found")

    print(f"Odd product is: {gRet}")


if __name__ == "__main__":
    main()
