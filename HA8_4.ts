
import * as readline from 'readline'

function CheckEven(iNo : number)
{
    let iDigit : number = 0
    let iMult : number = 1

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = Math.floor(iNo / 10);
    }
    return iMult;
}

async function main()
{
    const rl = readline.createInterface({
        input : process.stdin,
        output: process.stdout
    })

    let iValue : number = 0
    let iRet : number = 0

    iValue = parseInt(await askQuestion(rl, "Enter a number")) ||0

    iRet = CheckEven(iValue)
    console.log("Even Count is : "+ iRet)

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