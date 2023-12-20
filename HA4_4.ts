//Write a program which accept three numbers and print its multiplication.
//Input : 5   4   7
//Output : 140

import * as readline from 'readline'

function Multiply(iNo1 : number, iNo2 : number, iNo3 : number)
{
    let iAns : number = 1
    if(iNo1 !=0)
    {
        iAns = iAns * iNo1
    }
    if(iNo2 !=0)
    {
        iAns = iAns * iNo2
    }
    if(iNo3 !=0)
    {
        iAns = iAns * iNo3
    }
    return iAns
}

async function main()
{
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    })

    let iValue1 : number = 0
    let iValue2 : number = 0
    let iValue3 : number = 0
    let iRet : number = 0

    iValue1 = parseInt(await askQuestion(rl, "Enter 1st number")) ||0
    iValue2 = parseInt(await askQuestion(rl, "Enter 2nd number")) ||0
    iValue3 = parseInt(await askQuestion(rl, "Enter 3rd number")) ||0

    iRet = Multiply(iValue1, iValue2, iValue3)

    console.log("Multiplication is :"+ iRet)
}
function askQuestion(rl: readline.Interface, question: string): Promise<string>
{
    return new Promise((resolve) =>{
        rl.question(question,(answer : any) => {
            resolve(answer)
        })
    })
}
main()