//0-5 free
// 5 - 10 $10
//10 - 65 $20
//above 65 free

const age = prompt("Enter your age");
if (age >= 0 && age < 5 || age >= 65) {
    console.log("FREE");
} else if (age < 10) {
    console.log("$10");
}
else if (age < 65) {
    console.log("$20");
}