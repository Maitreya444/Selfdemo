//Write a program which accept number from user and display its factors in descending order
//Input : 12
//Output: 6   4   3   2   1 

import * as readline from 'readline';

function FactRev(iNo : number)
{
    let iCnt : number = 0

    for(iCnt = iNo/2; iCnt > 0; iCnt--)
    {
        if((iNo % iCnt)==0)
        {
            console.log(iCnt)
        }
    }
}

async function main()
{
    const rl = readline.createInterface({
        input:process.stdin,
        output: process.stdout
    })

    let iValue : number = 0
    
    iValue = parseInt(await askQuestion(rl, "Enter a number")) ||0;

    FactRev(iValue);

    rl.close();
}
function askQuestion(rl: readline.Interface, question: string): Promise<string>
{
    return new Promise((resolve) =>{
        rl.question(question,(answer : any) =>{
            resolve(answer);
        })
    })
}
main()
