// while(!gameover){                           uncertain moves 
// move useful in this type of case than for loop 
//     player 1 move
//     player 2 move 
// }

// let count = 0;
// while (count < 10) {
//     console.log(count);
//     count++;
// }

// const SECRET = "happy";
// let guess = prompt("guess the secret code....");
// while (guess !== SECRET) {
//     guess = prompt("enter the secret code....");
// }
// console.log("CONGRATS YOU GOT THE SECRET")

let input = prompt("hey say something");
while (true) {
    input = prompt(input);
    if (input.toLowerCase() === "stop plz")
        break;
}
console.log("OK YOU WIN")


