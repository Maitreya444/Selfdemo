//Write a program which accept name from user and print that name.
//Input : Maitreya Gangurde  Output : Maitreya Gangurde

import * as readline from 'readline';

async function main()
{
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    })

    const iValue = await askQuestion(rl, "Enter your Name : ");

    console.log("Your name is :"+ iValue);

    rl.close();
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