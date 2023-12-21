//Write a program which accept number from user and if number is les than 50 then print small, if it is greater 
//than 50 and less than 100 then print medium, if its greater than 100 then print large.

import * as readline from 'readline'

function Pattern(iNo : number)
{
    if(iNo <= 50)
    {
        console.log("Small");
    }
    else if (iNo > 50 && iNo < 100)
    {
        console.log("Medium");
    }
    else
    {
        console.log("Greater");
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