/*Accept N numbers from user and return difference between summation of even elements and summation of even elements and
summation of odd elements.
Input :-  N : 6
Elements :- 85   66  3   80  93  88
Output :- 53 (234 - 181) */

import * as readline from 'readline'

function calculateDifference(arr: number[]): number {
    let evenSum = 0;
    let oddSum = 0;

    arr.forEach(element => {
        if (element % 2 === 0) {
            evenSum += element;
        } else {
            oddSum += element;
        }
    });

    return evenSum - oddSum;
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
