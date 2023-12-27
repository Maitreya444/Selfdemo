//Write a program which accept number from user and display it in reverse order.
//Input : 1234
//Output : 4321

import * as readline from 'readline'

function Check0(iNo : number)
{
    let iDigit : number = 0
    while(iNo !==0)
    {
        iDigit = iNo % 10
        if(iDigit === 0)
        {
            return true;
        }
        iNo = Math.floor(iNo / 10)
    }
    return false
}

async function main()
{
    const rl = readline.createInterface({
        input : process.stdin,
        output: process.stdout
    })

    let iValue : number = 0;
    let bRet : boolean = false

    iValue = parseInt(await askQuestion(rl, "Enter a Number")) ||0

    bRet = Check0(iValue)
    if(bRet == true)
    {
        console.log("0 is present");
    }
    else
    {
        console.log("0 is absent")
    }
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