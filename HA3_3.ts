//Write a program which accept number from user and display all its non factors
//Input : 12
//Output: 5    7    8   9   10  11

import * as readline from 'readline';

function NonFact(iNo : number)
{
    let iCnt : number = 0;

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        if((iNo % iCnt)!=0)
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

    iValue = parseInt(await askQuestion(rl, "Enter a number ")) ||0

    NonFact(iValue);

    rl.close();
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