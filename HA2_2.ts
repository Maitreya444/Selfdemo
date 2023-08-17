//Accpet one number from user and if that number is < 10 then print Hello else print Demo

import * as readline from 'readline';

function Display(iNo : number)
{
    if(iNo <= 10)
    {
        console.log("Hello");
    }
    else
    {
        console.log("Demo");
    }
}

async function main()
{
    const rl = readline.createInterface({
        input:process.stdin,
        output:process.stdout
    })

    let iValue : number = 0;

    iValue = parseInt(await askQuestion(rl, "Enter a number")) ||0;

    Display(iValue)

    rl.close()
}

function askQuestion(rl: readline.Interface, question: string): Promise<string>
{
    return new Promise((resolve) =>
    {
        rl.question(question,(answer : any) =>{
            resolve(answer)
        })
    })
}