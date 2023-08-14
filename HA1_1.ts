import * as readline from 'readline';

function divideNumbers(num1: number, num2: number): number {
    let result: number = 0;

    if (num2 === 0) {
        console.log("Enter a non-zero number");
    } else {
        result = num1 / num2;
    }

    return result;
}

async function main() {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    let num1: number = 0;
    let num2: number = 0;
    let result: number = 0;

    num1 = parseFloat(await askQuestion(rl, "Enter num1: ")) || 0;
    num2 = parseFloat(await askQuestion(rl, "Enter num2: ")) || 0;

    result = divideNumbers(num1, num2);

    console.log("Ans is", result);

    rl.close();
}

function askQuestion(rl: readline.Interface, question: string): Promise<string> {
    return new Promise((resolve) => {
        rl.question(question, (answer : any) => {
            resolve(answer);
        });
    });
}

main();
