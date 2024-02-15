//Write a program which accept number from user and return count of odd digit.
//Input : 1234
//Output : 2

import * as readline from 'readline'

function CheckEven(iNo : number)
{
    let iDigit : number = 0
    let iCount : number = 0

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit %2 != 0)
        {
            iCount++;
        }
        iNo = Math.floor(iNo / 10);
    }
    return iCount;
}

async function main()
{
    const rl = readline.createInterface({
        input : process.stdin,
        output: process.stdout
    })

    let iValue : number = 0
    let iRet : number = 0

    iValue = parseInt(await askQuestion(rl, "Enter a number")) ||0

    iRet = CheckEven(iValue)
    console.log("Even Count is : "+ iRet)

    rl.close();
}
function askQuestion(rl: readline.Interface, question: string): Promise<string>
{
    return new Promise((resolve) =>{
        rl.question(question,(answer : any) =>{
            resolve(answer)
        })
    })
}
main()