import * as readline from 'readline';

function ChkDivisible(iNo : number): boolean
{
    if((iNo % 5)==0)
    {
        return true
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
    });

    let iValue : number = 0;
    let bRet : boolean = false;

    iValue = parseFloat(await askQuestion(rl, "Enter a Number : ")) ||0;

    bRet = ChkDivisible(iValue);

    if(bRet == true)
    {
        console.log("No is divisible by 5");
    }
    else
    {
        console.log("Not divisible by 5");
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