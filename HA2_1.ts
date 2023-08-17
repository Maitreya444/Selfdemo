import * as readline from 'readline';

function Display(iNo : number)
{
    let iCnt : number = 0

    for(iCnt=0; iCnt < iNo; iCnt++)
    {
        console.log("*")
    }

}

async function main()
{
    const rl = readline.createInterface({
        input:process.stdin,
        output: process.stdout
    })

    let iValue : number = 0;

    iValue = parseInt(await askQuestion(rl, "Enter a Number :")) ||0;

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
main()