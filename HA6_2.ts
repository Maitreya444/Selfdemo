import * as readline from 'readline'

function Pattern(iNo : number)
{
    if(iNo == 1)
    {
        console.log("One");
    }
    else if(iNo ==2)
    {
        console.log("Two");
    }
    else if(iNo == 3)
    {
        console.log("Three");
    }
    else if (iNo == 4)
    {
        console.log("Four");
    }
    else if(iNo == 5)
    {
        console.log("Five");
    }
    else if (iNo ==6)
    {
        console.log("Six");
    }
    else if (iNo == 7)
    {
        console.log("Seven");
    }
    else if(iNo == 8)
    {
        console.log("Eight");
    }
    else if(iNo == 9)
    {
        console.log("Nine");
    }
    else if (iNo >10)
    {
        console.log("Invalid");
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