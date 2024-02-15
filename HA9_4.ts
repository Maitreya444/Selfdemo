import * as readline from 'readline'

function calculateDifference(arr: number[]): void {
    let evenSum = 0;
    let oddSum = 0;

    arr.forEach(element => {
        if (element % 5 === 0 && element %3 ===0) {
            console.log(element)
        } 
    });
}

function askQuestion(rl: readline.Interface, question: string): Promise<string> {
    return new Promise(resolve => {
        rl.question(question, (answer: string) => {
            resolve(answer);
        });
    });
}

async function main() {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    let size: number = parseInt(await askQuestion(rl, "Enter number of elements: ")) || 0;

    askQuestion(rl, `Enter ${size} elements separated by space: `)
        .then(input => {
            const arr = input.split(' ').map(Number);
            console.log("Elements of array are:");
            arr.forEach(element => {
                console.log(element);
            });

            const difference = calculateDifference(arr);
            console.log(`Difference between summation of even and odd elements is: ${difference}`);

            rl.close();
        })
        .catch(error => {
            console.error("An error occurred:", error);
            rl.close();
        });
}

main();