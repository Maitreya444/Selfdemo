//Accepts N number from user and print all odd Numbers upto N
//Input : 18
//Output : 1    3   5   7   9   11  13

import * as readline from 'readline'

function Pattern(iNo : number)
{
    let iCnt : number =0
    for(iCnt = 0; iCnt<=iNo; iCnt++)
    {
        if(iCnt %2 !=0)
        {
            console.log(iCnt)
        }
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