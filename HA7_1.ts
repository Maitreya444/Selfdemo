//Write a program which accept number from user and display it in reverse order.
//Input : 1234
//Output : 4321

import * as readline from 'readline'

function Reverse(iNo : number)
{
    let iDigit : number = 0
    while(iNo !=0)
    {
        iDigit = iNo % 10
        console.log(iDigit)
        iNo = Math.floor(iNo / 10)
    }
}

async function main()
{
    const rl = readline.createInterface({
        input : process.stdin,
        output: process.stdout
    })

    let iValue : number = 0;

    iValue = parseInt(await askQuestion(rl, "Enter a Number")) ||0

    Reverse(iValue)

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
