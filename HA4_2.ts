import * as readline from 'readline';

function ChkNum(iNo : number)
{
    if(iNo <= 100)
    {
        return true;
    }
    else
    {
        return false
    }
}

async function main()
{
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    })

    let iValue : number = 0
    let iRet : boolean = false

    iValue = parseInt(await askQuestion(rl, "Enter a number")) ||0

    iRet = ChkNum(iValue);

    if(iRet == true)
    {
        console.log("Smaller")
    }
    else
    {
        console.log("Greater")
    }

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