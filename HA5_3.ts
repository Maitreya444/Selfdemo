//Write a program which accept number from user and print numbers till that number 
//Input : 4
//Output : -4   -3   -2  -1  0  1   2   3   4

import * as readline from 'readline'

function Pattern(iNo : number)
{
    let iCnt : number =0
    for(iCnt = -iNo; iCnt<=iNo; iCnt++)
    {
        console.log("iCnt\t")
    }
}

async function main()
{
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    })

    let iValue : number = 0

    iValue = parseInt(await askQuestion(rl, "Enter a number")) ||0

    Pattern (iValue)
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