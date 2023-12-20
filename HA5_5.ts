//Write a program which accepts N and print first 5 Multiples of it
//Input : 4
//Output : 4    8    12     16      20

import * as readline from 'readline'

function Pattern(iNo : number)
{
    let iCnt : number =0
    for(iCnt = 1; iCnt<=5; iCnt++)
    {
        console.log(iCnt*iNo)
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