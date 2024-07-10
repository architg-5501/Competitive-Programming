let maximum = parseInt(prompt("enter a maximum number"));
while (!maximum) {
    maximum = parseInt(prompt("enter maximun number again"));
}

const targetNum = Math.floor(Math.random() * maximum) + 1;
console.log(targetNum);

let guess = parseInt(prompt("guess the target Number "));
let attempts = 1;
while ((parseInt(guess)) !== targetNum) {
    attempts++;
    if (guess === "q") {
        break;
    }
    if (guess > targetNum)
        guess = (prompt("too high guess the word again")); //for quitting function replacing parseInt(prompt())-> prompt()
    else if (guess < targetNum)
        guess = (prompt("too low guess the word again"));

}
if (guess === "q") {
    console.log("OK you are quitting");
}
else {
    console.log("YOU WIN");
    console.log(`it took you ${attempts} attempts`);
}