//Accept two numbers from user and display first number in second number of times
//Input : 12    5   
//Output: 12    12  12  12  12

import * as readline from 'readline';

function Display(iNo1 : number, iNo2 : number)
{
    let iCnt : number = 0;

    for(iCnt =1; iCnt<= iNo2; iCnt++)
    {
        console.log(iNo1);
    }
}

async function main()
{
    const rl = readline.createInterface({
        input:process.stdin,
        output: process.stdout
    })

    let iValue1 : number = 0;
    let iValue2 : number = 0;

    iValue1 = parseInt(await askQuestion(rl, "Enter a number 1")) ||0;

    iValue2 = parseInt(await askQuestion(rl, "Enter a number 2")) ||0;

    Display(iValue1, iValue2)

    rl.close();
}

function askQuestion(rl: readline.Interface, question: string): Promise<string>
{
    return new Promise((resolve)=>
    {
        rl.question(question,(answer:any) =>{
            resolve(answer)
        })
    })
}
main()