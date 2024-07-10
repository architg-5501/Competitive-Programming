//iterating over objects

let testScores = {
    kim: 45,
    haua: 23,
    hsduoi: 54,
    vcsd: 546,
    cwd: 55,
    fed: 7
}

//first method : using for_in loop 
// for (let stud in testScores) {
//     console.log(`${stud} obtained ${testScores[stud]} marks `)
// }

//second method: converting object into array
// console.log(Object.keys(testScores));
// console.log(object.values(testScores));
// console.log(object.entries(testScores))

//finding the avg of total scores
let total = 0;
for (let score of Object.values(testScores)) {
    total += score;
}
let elements = 0;
for (let stud of Object.keys(testScores)) {
    elements++;
}

console.log(total / elements); // we can divide total by score.length to find the average