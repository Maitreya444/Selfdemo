import * as readline from 'readline';

function ChkNo(iNo : number)
{
    if((iNo % 2)==0)
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
        input:process.stdin,
        output:process.stdout
    })

    let iValue : number = 0;
    let bRet : boolean = false;

    iValue = parseInt(await askQuestion(rl, "Enter a number     ")) ||0;

    bRet = ChkNo(iValue);

    if(bRet == true)
    {
        console.log("EVEN");
    }
    else
    {
        console.log("ODD");
    }

    rl.close();
}

function askQuestion(rl: readline.Interface, question: string): Promise<string>
{
    return new Promise((resolve) =>{
        rl.question(question,(answer : any) =>{
            resolve(answer);
        })
    })
}
main()