//Write a program which accept two numbers and check wheather numbers are equal or not
//Input : 10 10
//Output : Equal
//Input : 69 88
//Output : Not Equal

import * as readline from 'readline'

function ChkEqual(iNo1 : number, iNo2 : number)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

async function main()
{
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    })

    let iValue1 : number = 0
    let iValue2 : number = 0
    let bRet : boolean = false

    iValue1 = parseInt(await askQuestion(rl, "Enter 1st number")) ||0
    iValue2 = parseInt(await askQuestion(rl, "Enter 2nd number")) ||0

    bRet = ChkEqual(iValue1, iValue2)

    if(bRet == true)
    {
        console.log("Equal")
    }
    else
    {
        console.log("Not Equal")
    }
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