//Write a program which accept number from user and print that number of $&* on screen 
//Input : 5
//Output : $&* $&* $&* $&* $&*

import * as readline from 'readline'

function Pattern(iNo : number)
{
    let iCnt : number =0
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        console.log("$  &  *\t")
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