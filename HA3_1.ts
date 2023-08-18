//Write a program which accept number from user and display multiplication of factors
//Input : 12
//Output : 144 (1 * 2 * 3 * 4 * 6)

import * as readline from 'readline';

function MultFact(iNo : number)
{
    let iCnt : number = 0
    let Ans : number = 1

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            Ans = Ans * iCnt;
        }
    }
    console.log(Ans)
}

async function main()
{
    const rl = readline.createInterface({
        input:process.stdin,
        output:process.stdout
    })

    let iValue : number = 0;

    iValue = parseInt(await askQuestion(rl, "Enter a number ")) ||0;

    MultFact(iValue)
}

function askQuestion(rl: readline.Interface, question: string): Promise<string>
{
    return new Promise((resolve) =>
    {
        rl.question(question,(answer:any) =>{
            resolve(answer);
        })
    })
}
main()